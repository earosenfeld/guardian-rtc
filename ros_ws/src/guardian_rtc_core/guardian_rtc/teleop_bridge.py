#!/usr/bin/env python3
"""
WebRTC-based teleoperation bridge for robot control.
"""

import asyncio
import json
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import JointState
from aiortc import RTCPeerConnection, RTCSessionDescription, VideoStreamTrack
from aiortc.contrib.media import MediaRelay
from aiortc.mediastreams import MediaStreamError
import cv2
import numpy as np
from aiohttp import web
import argparse

class TeleopBridge(Node):
    """Node that provides WebRTC-based teleoperation."""
    
    def __init__(self):
        super().__init__('teleop_bridge')
        
        # Create publisher for velocity commands
        self.cmd_pub = self.create_publisher(
            Twist,
            'servo_node/delta_twist_cmds',
            10)
            
        # Create subscriber for joint states
        self.joint_state_sub = self.create_subscription(
            JointState,
            'joint_states',
            self.joint_state_callback,
            10)
            
        # Initialize WebRTC components
        self.pcs = set()
        self.relay = MediaRelay()
        
        # Start web server
        self.app = web.Application()
        self.app.router.add_post("/offer", self.offer)
        self.app.router.add_static("/", "resource/web_assets")
        
        # Start web server in background
        self.runner = web.AppRunner(self.app)
        asyncio.get_event_loop().create_task(self.start_server())
        
        self.get_logger().info('Teleop bridge initialized')
        
    async def start_server(self):
        """Start the web server."""
        await self.runner.setup()
        site = web.TCPSite(self.runner, 'localhost', 8080)
        await site.start()
        self.get_logger().info('Web server started at http://localhost:8080')
        
    def joint_state_callback(self, msg: JointState):
        """Process incoming joint states."""
        # Store latest joint state for overlay
        self.latest_joint_state = msg
        
    async def offer(self, request):
        """Handle WebRTC offer."""
        params = await request.json()
        offer = RTCSessionDescription(
            sdp=params["sdp"],
            type=params["type"]
        )
        
        pc = RTCPeerConnection()
        self.pcs.add(pc)
        
        @pc.on("connectionstatechange")
        async def on_connectionstatechange():
            if pc.connectionState == "failed":
                await pc.close()
                self.pcs.discard(pc)
                
        @pc.on("datachannel")
        def on_datachannel(channel):
            @channel.on("message")
            def on_message(message):
                try:
                    cmd = json.loads(message)
                    if 'key' in cmd:
                        # Convert arrow key to twist command
                        twist = Twist()
                        if cmd['key'] == 'ArrowUp':
                            twist.linear.x = 0.1
                        elif cmd['key'] == 'ArrowDown':
                            twist.linear.x = -0.1
                        elif cmd['key'] == 'ArrowLeft':
                            twist.angular.z = 0.1
                        elif cmd['key'] == 'ArrowRight':
                            twist.angular.z = -0.1
                        self.cmd_pub.publish(twist)
                except json.JSONDecodeError:
                    self.get_logger().error('Invalid JSON command')
                    
        # Add video track
        video_track = CameraTrack()
        pc.addTrack(video_track)
        
        # Handle the offer
        await pc.setRemoteDescription(offer)
        
        # Create answer
        answer = await pc.createAnswer()
        await pc.setLocalDescription(answer)
        
        return web.Response(
            content_type="application/json",
            text=json.dumps({
                "sdp": pc.localDescription.sdp,
                "type": pc.localDescription.type
            })
        )

    def process_control_command(self, command):
        """Process a control command and publish a Twist message."""
        try:
            if 'key' in command:
                twist = Twist()
                if command['key'] == 'ArrowUp':
                    twist.linear.x = 0.1
                elif command['key'] == 'ArrowDown':
                    twist.linear.x = -0.1
                elif command['key'] == 'ArrowLeft':
                    twist.angular.z = 0.1
                elif command['key'] == 'ArrowRight':
                    twist.angular.z = -0.1
                self.cmd_pub.publish(twist)
        except Exception as e:
            self.get_logger().error(f'Error processing control command: {e}')

class CameraTrack(VideoStreamTrack):
    """Video track that streams camera feed with joint state overlay."""
    
    def __init__(self):
        super().__init__()
        self.cap = cv2.VideoCapture(0)  # Use Gazebo camera topic
        
    async def recv(self):
        """Get next video frame with joint state overlay."""
        ret, frame = self.cap.read()
        if not ret:
            raise MediaStreamError
            
        # Add joint state overlay
        if hasattr(self, 'latest_joint_state'):
            y = 30
            for name, pos in zip(self.latest_joint_state.name, self.latest_joint_state.position):
                cv2.putText(frame, f"{name}: {pos:.2f}", (10, y), 
                           cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
                y += 30
                
        # Convert to RGB
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        
        return frame

def main(args=None):
    rclpy.init(args=args)
    node = TeleopBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main() 
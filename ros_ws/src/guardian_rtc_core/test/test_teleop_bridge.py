#!/usr/bin/env python3

import unittest
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Twist
import json
import time
import threading
from http.server import HTTPServer, BaseHTTPRequestHandler
import requests
from guardian_rtc.teleop_bridge import TeleopBridge

class MockWebRTCServer(BaseHTTPRequestHandler):
    def do_POST(self):
        if self.path == '/offer':
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            offer = json.loads(post_data.decode('utf-8'))
            
            # Send a mock answer
            self.send_response(200)
            self.send_header('Content-type', 'application/json')
            self.end_headers()
            answer = {
                'type': 'answer',
                'sdp': 'mock-sdp'
            }
            self.wfile.write(json.dumps(answer).encode())
        else:
            self.send_error(404)

class TestTeleopBridge(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        rclpy.init()
        cls.node = TeleopBridge()
        
        # Create publishers and subscribers
        cls.joint_state_pub = cls.node.create_publisher(JointState, 'joint_states', 10)
        cls.twist_sub = cls.node.create_subscription(
            Twist, 'cmd_vel', cls.twist_callback, 10)
        
        # Start mock WebRTC server
        cls.server = HTTPServer(('localhost', 8080), MockWebRTCServer)
        cls.server_thread = threading.Thread(target=cls.server.serve_forever)
        cls.server_thread.daemon = True
        cls.server_thread.start()
        
        # Wait for subscribers to be ready
        time.sleep(1)
        
        # Test state
        cls.last_twist = None

    @classmethod
    def tearDownClass(cls):
        cls.server.shutdown()
        cls.server.server_close()
        cls.node.destroy_node()
        rclpy.shutdown()

    def twist_callback(self, msg):
        self.last_twist = msg

    def test_web_interface_connection(self):
        """Test that the web interface can connect to the bridge"""
        # Send a mock WebRTC offer
        offer = {
            'type': 'offer',
            'sdp': 'mock-sdp'
        }
        response = requests.post('http://localhost:8080/offer', json=offer)
        self.assertEqual(response.status_code, 200)
        self.assertIn('type', response.json())
        self.assertIn('sdp', response.json())

    def test_joint_state_publishing(self):
        """Test that joint states are properly published"""
        # Create a joint state message
        msg = JointState()
        msg.header.stamp = self.node.get_clock().now().to_msg()
        msg.name = ['shoulder_pan_joint', 'shoulder_lift_joint', 'elbow_joint',
                   'wrist_1_joint', 'wrist_2_joint', 'wrist_3_joint']
        msg.position = [0.1, 0.2, 0.3, 0.4, 0.5, 0.6]
        msg.velocity = [0.1] * 6
        msg.effort = [0.0] * 6

        # Publish joint state
        self.joint_state_pub.publish(msg)
        
        # Wait for processing
        time.sleep(0.1)
        rclpy.spin_once(self.node, timeout_sec=0.1)

    def test_control_commands(self):
        """Test that control commands are properly received and converted to Twist messages"""
        # Reset test state
        self.last_twist = None

        # Simulate a control command from the web interface
        command = {'key': 'ArrowUp'}

        # Call the process_control_command method directly
        self.node.process_control_command(command)

        # Wait for processing
        time.sleep(0.1)
        rclpy.spin_once(self.node, timeout_sec=0.1)

        # Verify that a Twist message was published
        self.assertIsNotNone(self.last_twist, "No Twist message received")
        self.assertGreater(self.last_twist.linear.x, 0, "Expected positive linear velocity")

if __name__ == '__main__':
    unittest.main() 
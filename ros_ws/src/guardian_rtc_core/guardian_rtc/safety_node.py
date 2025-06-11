#!/usr/bin/env python3
"""
Safety node that monitors and limits kinetic energy of robot joints.
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Empty
from guardian_rtc_core.msg import StopEvent
from guardian_rtc.config import SafetyConfig
from guardian_rtc.utils.dynamics import calculate_kinetic_energy
from guardian_rtc.logger import SafetyLogger
import time

class SafetyNode(Node):
    """Node that monitors and limits kinetic energy of robot joints."""

    def __init__(self):
        super().__init__('safety_node')
        
        # Load configuration
        self.config = SafetyConfig()
        
        # Initialize logger
        self.logger = SafetyLogger()
        
        # Create subscribers and publishers
        self.joint_state_sub = self.create_subscription(
            JointState,
            'joint_states',
            self.joint_state_callback,
            10)
            
        self.stop_pub = self.create_publisher(
            Empty,
            'stop_trajectory_controller',
            10)
            
        self.event_pub = self.create_publisher(
            StopEvent,
            'guardianrtc/stop_event',
            10)
            
        # Rate limiter for 1kHz operation
        self.last_callback_time = 0.0
        self.min_callback_period = 0.001  # 1ms = 1kHz
        
        self.get_logger().info('Safety node initialized')

    def joint_state_callback(self, msg: JointState):
        """Process incoming joint states and enforce safety limits."""
        # Rate limit to 1kHz
        current_time = time.time()
        if current_time - self.last_callback_time < self.min_callback_period:
            return
        self.last_callback_time = current_time
        
        # Calculate kinetic energy
        ke = calculate_kinetic_energy(msg, self.config)
        
        # Log the measurement
        self.logger.log_ke_measurement(ke)
        
        # Check if we need to limit motion
        if ke > self.config.max_kinetic_energy:
            self.get_logger().warn(f'Kinetic energy {ke:.2f} exceeds limit {self.config.max_kinetic_energy:.2f}')
            
            # Publish stop command
            stop_msg = Empty()
            self.stop_pub.publish(stop_msg)
            
            # Publish stop event
            event = StopEvent()
            event.timestamp_ns = int(time.time_ns())
            event.event_type = 'KE_LIMIT'
            event.ke_j = ke
            event.joint_positions = list(msg.position)
            self.event_pub.publish(event)
            
            # Log the stop event
            self.logger.log_stop_event(event)

def main(args=None):
    rclpy.init(args=args)
    node = SafetyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main() 
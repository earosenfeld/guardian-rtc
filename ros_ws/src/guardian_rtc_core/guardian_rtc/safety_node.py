#!/usr/bin/env python3
"""
Safety node that monitors and limits kinetic energy of robot joints.
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_msgs.msg import JointTrajectory
from guardian_rtc.config import SafetyConfig
from guardian_rtc.utils.dynamics import calculate_kinetic_energy
from guardian_rtc.logger import SafetyLogger

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
            
        self.cmd_jog_pub = self.create_publisher(
            JointTrajectory,
            'cmd_jog',
            10)
            
        self.get_logger().info('Safety node initialized')

    def joint_state_callback(self, msg: JointState):
        """Process incoming joint states and enforce safety limits."""
        # Calculate kinetic energy
        ke = calculate_kinetic_energy(msg, self.config)
        
        # Log the measurement
        self.logger.log_ke_measurement(ke)
        
        # Check if we need to limit motion
        if ke > self.config.max_kinetic_energy:
            self.get_logger().warn(f'Kinetic energy {ke:.2f} exceeds limit {self.config.max_kinetic_energy:.2f}')
            # TODO: Implement motion limiting logic

def main(args=None):
    rclpy.init(args=args)
    node = SafetyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main() 
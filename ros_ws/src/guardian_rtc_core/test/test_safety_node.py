#!/usr/bin/env python3

import unittest
import time
import numpy as np
from mock_ros import MockNode, MockJointState, MockEmpty, MockStopEvent
from guardian_rtc.safety_node import SafetyNode

class TestSafetyNode(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.node = MockNode()
        cls.safety_node = SafetyNode()

    def test_kinetic_energy_calculation(self):
        """Test that kinetic energy is calculated correctly"""
        # Create a joint state message with known velocities
        joint_state = MockJointState()
        joint_state.name = ['joint1', 'joint2']
        joint_state.velocity = [1.0, 2.0]  # m/s
        joint_state.position = [0.0, 0.0]  # rad

        # Calculate expected kinetic energy (KE = 0.5 * m * v^2)
        # Using mass = 1.0 kg for simplicity
        expected_ke = 0.5 * (1.0 * 1.0**2 + 1.0 * 2.0**2)  # Joules

        # Process the joint state
        self.safety_node.joint_state_callback(joint_state)

        # Verify the calculated kinetic energy
        self.assertAlmostEqual(self.safety_node.last_ke, expected_ke, places=6)

    def test_safety_limit(self):
        """Test that motion is stopped when kinetic energy exceeds limit"""
        # Create a joint state message with high velocities
        joint_state = MockJointState()
        joint_state.name = ['joint1', 'joint2']
        joint_state.velocity = [10.0, 10.0]  # m/s
        joint_state.position = [0.0, 0.0]  # rad

        # Process the joint state
        self.safety_node.joint_state_callback(joint_state)

        # Verify that a stop command was published
        self.assertTrue(self.safety_node.stop_publisher.published)

    def test_normal_operation(self):
        """Test that motion is not stopped when kinetic energy is below limit"""
        # Create a joint state message with low velocities
        joint_state = MockJointState()
        joint_state.name = ['joint1', 'joint2']
        joint_state.velocity = [0.1, 0.1]  # m/s
        joint_state.position = [0.0, 0.0]  # rad

        # Process the joint state
        self.safety_node.joint_state_callback(joint_state)

        # Verify that no stop command was published
        self.assertFalse(self.safety_node.stop_publisher.published)

if __name__ == '__main__':
    unittest.main() 
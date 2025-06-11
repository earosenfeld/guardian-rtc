"""
Tests for kinetic energy limiting functionality.
"""

import pytest
import numpy as np
from sensor_msgs.msg import JointState
from guardian_rtc_core.guardian_rtc.utils.dynamics import calculate_kinetic_energy
from guardian_rtc_core.guardian_rtc.config import SafetyConfig

def test_kinetic_energy_calculation():
    """Test kinetic energy calculation with known inputs."""
    # Create test joint state
    joint_state = JointState()
    joint_state.name = ['joint_1', 'joint_2']
    joint_state.position = [0.0, 0.0]
    joint_state.velocity = [1.0, 2.0]  # rad/s
    
    # Create test config with known inertia
    config = SafetyConfig(
        max_kinetic_energy=100.0,
        joint_limits={'joint_1': [-3.14, 3.14], 'joint_2': [-3.14, 3.14]},
        inertia_params={'joint_1': 1.0, 'joint_2': 2.0}
    )
    
    # Calculate kinetic energy
    ke = calculate_kinetic_energy(joint_state, config)
    
    # Expected KE = 0.5 * (1.0 * 1.0^2 + 2.0 * 2.0^2) = 4.5 J
    expected_ke = 4.5
    assert abs(ke - expected_ke) < 1e-6 
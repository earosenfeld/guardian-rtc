"""
Dynamics utilities for calculating kinetic energy and other motion metrics.
"""

import numpy as np
from sensor_msgs.msg import JointState
from guardian_rtc.config import SafetyConfig

def calculate_kinetic_energy(joint_state: JointState, config: SafetyConfig) -> float:
    """
    Calculate the total kinetic energy of the robot.
    
    Args:
        joint_state: Current joint states
        config: Safety configuration with inertia parameters
        
    Returns:
        Total kinetic energy in Joules
    """
    # Extract velocities
    velocities = np.array(joint_state.velocity)
    
    # Get inertia matrix for current configuration
    inertia = config.get_inertia_matrix(joint_state.position)
    
    # Calculate kinetic energy: KE = 0.5 * v^T * M * v
    ke = 0.5 * velocities.T @ inertia @ velocities
    
    return float(ke) 
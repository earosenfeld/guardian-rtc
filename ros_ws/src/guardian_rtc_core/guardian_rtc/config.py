"""
Configuration management for GuardianRTC.
"""

from dataclasses import dataclass
from typing import Dict, List
import yaml
import numpy as np
from pathlib import Path

@dataclass
class SafetyConfig:
    """Safety configuration parameters."""
    
    max_kinetic_energy: float
    joint_limits: Dict[str, List[float]]
    inertia_params: Dict[str, float]
    
    @classmethod
    def from_yaml(cls, yaml_path: str) -> 'SafetyConfig':
        """Load configuration from YAML file."""
        with open(yaml_path, 'r') as f:
            data = yaml.safe_load(f)
            
        return cls(
            max_kinetic_energy=data['max_kinetic_energy'],
            joint_limits=data['joint_limits'],
            inertia_params=data['inertia_params']
        )
        
    def get_inertia_matrix(self, joint_positions: List[float]) -> np.ndarray:
        """
        Get the inertia matrix for the current joint configuration.
        
        Args:
            joint_positions: Current joint positions
            
        Returns:
            Inertia matrix as numpy array
        """
        # TODO: Implement proper inertia matrix calculation
        # For now, return a simple diagonal matrix
        n_joints = len(joint_positions)
        return np.diag([self.inertia_params[f'joint_{i}'] for i in range(n_joints)]) 
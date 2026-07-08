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
        Diagonal approximation of the joint-space inertia matrix.

        A safety monitor does not need the exact configuration-dependent
        M(q); this prototype uses per-joint effective inertias from
        ``inertia_params`` (intended as worst-case values: reflected
        rotor/gearbox inertia plus downstream links at maximum extension).
        Note this is a heuristic, not a proven bound — a diagonal matrix
        upper-bounds 0.5·vᵀM(q)v only if each entry dominates M(q)'s
        largest eigenvalue contribution, which must be established per
        robot when configuring real limits.

        Args:
            joint_positions: Current joint positions (kept for API
                compatibility with a future configuration-dependent model)

        Returns:
            Diagonal worst-case inertia matrix as a numpy array
        """
        n_joints = len(joint_positions)
        return np.diag([self.inertia_params[f'joint_{i + 1}'] for i in range(n_joints)]) 
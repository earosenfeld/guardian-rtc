# API Documentation

## ROS 2 Nodes

### Safety Node

The safety node monitors joint velocities and enforces kinetic energy limits.

#### Subscribed Topics
- `/joint_states` (sensor_msgs/JointState)
  - Current joint positions and velocities

#### Published Topics
- `/cmd_jog` (control_msgs/JointTrajectory)
  - Velocity commands with safety limits applied

#### Parameters
- `max_kinetic_energy` (double)
  - Maximum allowed kinetic energy in Joules
- `joint_limits` (dict)
  - Position limits for each joint
- `inertia_params` (dict)
  - Inertia parameters for each joint

### Teleoperation Bridge

The teleoperation bridge provides WebRTC-based remote control.

#### WebRTC API
- `POST /offer`
  - Create WebRTC offer
  - Returns: SDP offer
- `POST /answer`
  - Handle WebRTC answer
  - Body: SDP answer

#### Data Channel
- `control`
  - JSON messages for joint velocity commands
  - Format: `{"joint": "joint_1", "velocity": 0.5}`

## Python API

### SafetyConfig

```python
class SafetyConfig:
    def __init__(self, max_kinetic_energy: float,
                 joint_limits: Dict[str, List[float]],
                 inertia_params: Dict[str, float])
    
    @classmethod
    def from_yaml(cls, yaml_path: str) -> 'SafetyConfig'
    
    def get_inertia_matrix(self, joint_positions: List[float]) -> np.ndarray
```

### SafetyLogger

```python
class SafetyLogger:
    def __init__(self, db_path: Optional[str] = None)
    
    def log_ke_measurement(self, ke: float, exceeded_limit: bool = False)
    
    def close(self)
```

## Configuration

### YAML Format

```yaml
max_kinetic_energy: 100.0
joint_limits:
  joint_1: [-3.14, 3.14]
  joint_2: [-3.14, 3.14]
inertia_params:
  joint_1: 1.0
  joint_2: 1.0
``` 
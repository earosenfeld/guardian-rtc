# StopEvent message for GuardianRTC
# Timestamp of the stop event
builtin_interfaces/Time timestamp

# Stop reason codes
uint8 REASON_UNKNOWN=0
uint8 REASON_KINETIC_ENERGY_LIMIT=1
uint8 REASON_JOINT_LIMIT=2
uint8 REASON_EMERGENCY_STOP=3
uint8 REASON_SAFETY_SYSTEM=4
uint8 REASON_USER_REQUEST=5
uint8 reason

# Kinetic energy at time of stop (in Joules)
float32 kinetic_energy

# Additional stop information
string message
string[] affected_joints
float32[] joint_velocities
float32[] joint_positions

# System state at time of stop
bool was_emergency_stop
bool was_controlled_stop
uint32 sequence_number 
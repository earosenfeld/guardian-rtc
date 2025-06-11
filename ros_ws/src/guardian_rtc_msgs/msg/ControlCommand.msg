# Control command message for GuardianRTC
# Timestamp of the command
builtin_interfaces/Time timestamp

# Command type
uint8 CMD_UNKNOWN=0
uint8 CMD_MOVE=1
uint8 CMD_STOP=2
uint8 CMD_EMERGENCY_STOP=3
uint8 CMD_RESET=4
uint8 CMD_CALIBRATE=5
uint8 command_type

# Movement command
geometry_msgs/Twist movement_command

# Command parameters
float32[] parameters
string[] command_options

# Command metadata
string command_id
uint32 sequence_number
bool requires_confirmation

# Safety limits
float32 max_velocity
float32 max_acceleration
float32 safety_timeout

# Additional command information
string command_message
bool is_priority_command 
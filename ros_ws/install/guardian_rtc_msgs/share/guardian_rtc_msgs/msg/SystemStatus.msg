# System status message for GuardianRTC
# Timestamp of the status message
builtin_interfaces/Time timestamp

# System state
uint8 STATE_UNKNOWN=0
uint8 STATE_INITIALIZING=1
uint8 STATE_READY=2
uint8 STATE_OPERATIONAL=3
uint8 STATE_EMERGENCY=4
uint8 STATE_SHUTDOWN=5
uint8 state

# System health status
bool is_healthy
string health_message

# Battery information
float32 battery_voltage
float32 battery_percentage
bool is_charging

# System metrics
float32 cpu_usage
float32 memory_usage
float32 temperature

# Additional status information
string[] active_nodes
string[] warnings
string[] errors 
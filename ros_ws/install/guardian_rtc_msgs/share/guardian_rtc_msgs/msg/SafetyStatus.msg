# Safety status message for GuardianRTC
# Timestamp of the safety status
builtin_interfaces/Time timestamp

# Safety state
uint8 SAFETY_UNKNOWN=0
uint8 SAFETY_NORMAL=1
uint8 SAFETY_WARNING=2
uint8 SAFETY_CRITICAL=3
uint8 SAFETY_EMERGENCY=4
uint8 safety_state

# Safety checks
bool is_safe_to_operate
bool is_emergency_stop_active
bool is_safety_system_healthy

# Safety metrics
float32[] sensor_readings
float32[] safety_thresholds
bool[] safety_checks_passed

# Safety events
string[] active_warnings
string[] active_errors
string[] safety_events

# Additional safety information
string safety_message
uint32 safety_checks_failed_count
uint32 last_safety_check_timestamp 
# Timestamp of the event (nanoseconds)
int64 timestamp_ns

# Type of event (e.g., "KE_LIMIT", "MANUAL_STOP")
string event_type

# Kinetic energy at time of stop (Joules)
float64 ke_j

# Joint positions at time of stop
float64[] joint_positions

# Optional payload identifier
string payload_id 
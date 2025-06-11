# StopEvent.msg
# Message definition for stop events

# Header with timestamp and frame_id
Header header

# Event type (e.g., "EMERGENCY", "SAFETY", "USER")
string event_type

# Priority level (1-5, where 1 is highest priority)
uint8 priority

# Additional description of the stop event
string description

# Optional metadata as key-value pairs
string[] metadata_keys
string[] metadata_values 
# System configuration message for GuardianRTC
# Timestamp of the configuration
builtin_interfaces/Time timestamp

# System configuration parameters
string config_version
string config_name
bool is_default_config

# Safety configuration
float32[] safety_thresholds
float32[] warning_thresholds
float32[] critical_thresholds
string[] safety_rules

# System parameters
float32[] system_parameters
string[] enabled_features
string[] disabled_features

# Network configuration
string[] network_interfaces
uint32[] network_ports
string[] network_protocols

# Logging configuration
string log_level
string[] log_categories
bool enable_debug_logging
bool enable_performance_logging

# Additional configuration
string[] custom_parameters
string config_description
bool requires_restart 
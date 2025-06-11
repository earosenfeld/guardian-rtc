// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'config_version'
// Member 'config_name'
// Member 'safety_rules'
// Member 'enabled_features'
// Member 'disabled_features'
// Member 'network_interfaces'
// Member 'network_protocols'
// Member 'log_level'
// Member 'log_categories'
// Member 'custom_parameters'
// Member 'config_description'
#include "rosidl_runtime_c/string.h"
// Member 'safety_thresholds'
// Member 'warning_thresholds'
// Member 'critical_thresholds'
// Member 'system_parameters'
// Member 'network_ports'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SystemConfig in the package guardian_rtc_msgs.
/**
  * System configuration message for GuardianRTC
  * Timestamp of the configuration
 */
typedef struct guardian_rtc_msgs__msg__SystemConfig
{
  builtin_interfaces__msg__Time timestamp;
  /// System configuration parameters
  rosidl_runtime_c__String config_version;
  rosidl_runtime_c__String config_name;
  bool is_default_config;
  /// Safety configuration
  rosidl_runtime_c__float__Sequence safety_thresholds;
  rosidl_runtime_c__float__Sequence warning_thresholds;
  rosidl_runtime_c__float__Sequence critical_thresholds;
  rosidl_runtime_c__String__Sequence safety_rules;
  /// System parameters
  rosidl_runtime_c__float__Sequence system_parameters;
  rosidl_runtime_c__String__Sequence enabled_features;
  rosidl_runtime_c__String__Sequence disabled_features;
  /// Network configuration
  rosidl_runtime_c__String__Sequence network_interfaces;
  rosidl_runtime_c__uint32__Sequence network_ports;
  rosidl_runtime_c__String__Sequence network_protocols;
  /// Logging configuration
  rosidl_runtime_c__String log_level;
  rosidl_runtime_c__String__Sequence log_categories;
  bool enable_debug_logging;
  bool enable_performance_logging;
  /// Additional configuration
  rosidl_runtime_c__String__Sequence custom_parameters;
  rosidl_runtime_c__String config_description;
  bool requires_restart;
} guardian_rtc_msgs__msg__SystemConfig;

// Struct for a sequence of guardian_rtc_msgs__msg__SystemConfig.
typedef struct guardian_rtc_msgs__msg__SystemConfig__Sequence
{
  guardian_rtc_msgs__msg__SystemConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guardian_rtc_msgs__msg__SystemConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_H_

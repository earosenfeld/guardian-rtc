// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_UNKNOWN'.
/**
  * System state
 */
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_UNKNOWN = 0
};

/// Constant 'STATE_INITIALIZING'.
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_INITIALIZING = 1
};

/// Constant 'STATE_READY'.
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_READY = 2
};

/// Constant 'STATE_OPERATIONAL'.
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_OPERATIONAL = 3
};

/// Constant 'STATE_EMERGENCY'.
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_EMERGENCY = 4
};

/// Constant 'STATE_SHUTDOWN'.
enum
{
  guardian_rtc_msgs__msg__SystemStatus__STATE_SHUTDOWN = 5
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'health_message'
// Member 'active_nodes'
// Member 'warnings'
// Member 'errors'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package guardian_rtc_msgs.
/**
  * System status message for GuardianRTC
  * Timestamp of the status message
 */
typedef struct guardian_rtc_msgs__msg__SystemStatus
{
  builtin_interfaces__msg__Time timestamp;
  uint8_t state;
  /// System health status
  bool is_healthy;
  rosidl_runtime_c__String health_message;
  /// Battery information
  float battery_voltage;
  float battery_percentage;
  bool is_charging;
  /// System metrics
  float cpu_usage;
  float memory_usage;
  float temperature;
  /// Additional status information
  rosidl_runtime_c__String__Sequence active_nodes;
  rosidl_runtime_c__String__Sequence warnings;
  rosidl_runtime_c__String__Sequence errors;
} guardian_rtc_msgs__msg__SystemStatus;

// Struct for a sequence of guardian_rtc_msgs__msg__SystemStatus.
typedef struct guardian_rtc_msgs__msg__SystemStatus__Sequence
{
  guardian_rtc_msgs__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guardian_rtc_msgs__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

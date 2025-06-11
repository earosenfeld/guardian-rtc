// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SAFETY_UNKNOWN'.
/**
  * Safety state
 */
enum
{
  guardian_rtc_msgs__msg__SafetyStatus__SAFETY_UNKNOWN = 0
};

/// Constant 'SAFETY_NORMAL'.
enum
{
  guardian_rtc_msgs__msg__SafetyStatus__SAFETY_NORMAL = 1
};

/// Constant 'SAFETY_WARNING'.
enum
{
  guardian_rtc_msgs__msg__SafetyStatus__SAFETY_WARNING = 2
};

/// Constant 'SAFETY_CRITICAL'.
enum
{
  guardian_rtc_msgs__msg__SafetyStatus__SAFETY_CRITICAL = 3
};

/// Constant 'SAFETY_EMERGENCY'.
enum
{
  guardian_rtc_msgs__msg__SafetyStatus__SAFETY_EMERGENCY = 4
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sensor_readings'
// Member 'safety_thresholds'
// Member 'safety_checks_passed'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'active_warnings'
// Member 'active_errors'
// Member 'safety_events'
// Member 'safety_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SafetyStatus in the package guardian_rtc_msgs.
/**
  * Safety status message for GuardianRTC
  * Timestamp of the safety status
 */
typedef struct guardian_rtc_msgs__msg__SafetyStatus
{
  builtin_interfaces__msg__Time timestamp;
  uint8_t safety_state;
  /// Safety checks
  bool is_safe_to_operate;
  bool is_emergency_stop_active;
  bool is_safety_system_healthy;
  /// Safety metrics
  rosidl_runtime_c__float__Sequence sensor_readings;
  rosidl_runtime_c__float__Sequence safety_thresholds;
  rosidl_runtime_c__boolean__Sequence safety_checks_passed;
  /// Safety events
  rosidl_runtime_c__String__Sequence active_warnings;
  rosidl_runtime_c__String__Sequence active_errors;
  rosidl_runtime_c__String__Sequence safety_events;
  /// Additional safety information
  rosidl_runtime_c__String safety_message;
  uint32_t safety_checks_failed_count;
  uint32_t last_safety_check_timestamp;
} guardian_rtc_msgs__msg__SafetyStatus;

// Struct for a sequence of guardian_rtc_msgs__msg__SafetyStatus.
typedef struct guardian_rtc_msgs__msg__SafetyStatus__Sequence
{
  guardian_rtc_msgs__msg__SafetyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guardian_rtc_msgs__msg__SafetyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REASON_UNKNOWN'.
/**
  * Stop reason codes
 */
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_UNKNOWN = 0
};

/// Constant 'REASON_KINETIC_ENERGY_LIMIT'.
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_KINETIC_ENERGY_LIMIT = 1
};

/// Constant 'REASON_JOINT_LIMIT'.
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_JOINT_LIMIT = 2
};

/// Constant 'REASON_EMERGENCY_STOP'.
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_EMERGENCY_STOP = 3
};

/// Constant 'REASON_SAFETY_SYSTEM'.
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_SAFETY_SYSTEM = 4
};

/// Constant 'REASON_USER_REQUEST'.
enum
{
  guardian_rtc_msgs__msg__StopEvent__REASON_USER_REQUEST = 5
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'message'
// Member 'affected_joints'
#include "rosidl_runtime_c/string.h"
// Member 'joint_velocities'
// Member 'joint_positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StopEvent in the package guardian_rtc_msgs.
/**
  * StopEvent message for GuardianRTC
  * Timestamp of the stop event
 */
typedef struct guardian_rtc_msgs__msg__StopEvent
{
  builtin_interfaces__msg__Time timestamp;
  uint8_t reason;
  /// Kinetic energy at time of stop (in Joules)
  float kinetic_energy;
  /// Additional stop information
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String__Sequence affected_joints;
  rosidl_runtime_c__float__Sequence joint_velocities;
  rosidl_runtime_c__float__Sequence joint_positions;
  /// System state at time of stop
  bool was_emergency_stop;
  bool was_controlled_stop;
  uint32_t sequence_number;
} guardian_rtc_msgs__msg__StopEvent;

// Struct for a sequence of guardian_rtc_msgs__msg__StopEvent.
typedef struct guardian_rtc_msgs__msg__StopEvent__Sequence
{
  guardian_rtc_msgs__msg__StopEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guardian_rtc_msgs__msg__StopEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_H_

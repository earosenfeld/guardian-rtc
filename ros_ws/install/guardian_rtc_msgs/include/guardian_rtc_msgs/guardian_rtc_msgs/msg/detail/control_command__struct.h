// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_UNKNOWN'.
/**
  * Command type
 */
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_UNKNOWN = 0
};

/// Constant 'CMD_MOVE'.
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_MOVE = 1
};

/// Constant 'CMD_STOP'.
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_STOP = 2
};

/// Constant 'CMD_EMERGENCY_STOP'.
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_EMERGENCY_STOP = 3
};

/// Constant 'CMD_RESET'.
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_RESET = 4
};

/// Constant 'CMD_CALIBRATE'.
enum
{
  guardian_rtc_msgs__msg__ControlCommand__CMD_CALIBRATE = 5
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'movement_command'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'parameters'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'command_options'
// Member 'command_id'
// Member 'command_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControlCommand in the package guardian_rtc_msgs.
/**
  * Control command message for GuardianRTC
  * Timestamp of the command
 */
typedef struct guardian_rtc_msgs__msg__ControlCommand
{
  builtin_interfaces__msg__Time timestamp;
  uint8_t command_type;
  /// Movement command
  geometry_msgs__msg__Twist movement_command;
  /// Command parameters
  rosidl_runtime_c__float__Sequence parameters;
  rosidl_runtime_c__String__Sequence command_options;
  /// Command metadata
  rosidl_runtime_c__String command_id;
  uint32_t sequence_number;
  bool requires_confirmation;
  /// Safety limits
  float max_velocity;
  float max_acceleration;
  float safety_timeout;
  /// Additional command information
  rosidl_runtime_c__String command_message;
  bool is_priority_command;
} guardian_rtc_msgs__msg__ControlCommand;

// Struct for a sequence of guardian_rtc_msgs__msg__ControlCommand.
typedef struct guardian_rtc_msgs__msg__ControlCommand__Sequence
{
  guardian_rtc_msgs__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guardian_rtc_msgs__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

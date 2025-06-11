// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guardian_rtc_msgs/msg/detail/control_command__rosidl_typesupport_introspection_c.h"
#include "guardian_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guardian_rtc_msgs/msg/detail/control_command__functions.h"
#include "guardian_rtc_msgs/msg/detail/control_command__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `movement_command`
#include "geometry_msgs/msg/twist.h"
// Member `movement_command`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `command_options`
// Member `command_id`
// Member `command_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guardian_rtc_msgs__msg__ControlCommand__init(message_memory);
}

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_fini_function(void * message_memory)
{
  guardian_rtc_msgs__msg__ControlCommand__fini(message_memory);
}

size_t guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__size_function__ControlCommand__parameters(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__parameters(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__parameters(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__fetch_function__ControlCommand__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__parameters(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__assign_function__ControlCommand__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__parameters(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__resize_function__ControlCommand__parameters(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__size_function__ControlCommand__command_options(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__command_options(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__command_options(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__fetch_function__ControlCommand__command_options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__command_options(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__assign_function__ControlCommand__command_options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__command_options(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__resize_function__ControlCommand__command_options(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array[13] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, command_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, movement_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, parameters),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__size_function__ControlCommand__parameters,  // size() function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__parameters,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__parameters,  // get(index) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__fetch_function__ControlCommand__parameters,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__assign_function__ControlCommand__parameters,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__resize_function__ControlCommand__parameters  // resize(index) function pointer
  },
  {
    "command_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, command_options),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__size_function__ControlCommand__command_options,  // size() function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_const_function__ControlCommand__command_options,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__get_function__ControlCommand__command_options,  // get(index) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__fetch_function__ControlCommand__command_options,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__assign_function__ControlCommand__command_options,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__resize_function__ControlCommand__command_options  // resize(index) function pointer
  },
  {
    "command_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requires_confirmation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, requires_confirmation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, max_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, safety_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, command_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_priority_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__ControlCommand, is_priority_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_members = {
  "guardian_rtc_msgs__msg",  // message namespace
  "ControlCommand",  // message name
  13,  // number of fields
  sizeof(guardian_rtc_msgs__msg__ControlCommand),
  guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array,  // message members
  guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle = {
  0,
  &guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guardian_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guardian_rtc_msgs, msg, ControlCommand)() {
  guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle.typesupport_identifier) {
    guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guardian_rtc_msgs__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

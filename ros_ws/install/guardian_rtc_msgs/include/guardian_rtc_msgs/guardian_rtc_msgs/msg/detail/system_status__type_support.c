// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guardian_rtc_msgs/msg/detail/system_status__rosidl_typesupport_introspection_c.h"
#include "guardian_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guardian_rtc_msgs/msg/detail/system_status__functions.h"
#include "guardian_rtc_msgs/msg/detail/system_status__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `health_message`
// Member `active_nodes`
// Member `warnings`
// Member `errors`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guardian_rtc_msgs__msg__SystemStatus__init(message_memory);
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function(void * message_memory)
{
  guardian_rtc_msgs__msg__SystemStatus__fini(message_memory);
}

size_t guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__active_nodes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__active_nodes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__active_nodes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__active_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__active_nodes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__active_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__active_nodes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__active_nodes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__errors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__errors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__errors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__errors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__errors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__errors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[13] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, is_healthy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, health_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, battery_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_charging",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, is_charging),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, cpu_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "memory_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, memory_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, active_nodes),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__active_nodes,  // size() function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__active_nodes,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__active_nodes,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__active_nodes,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__active_nodes,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__active_nodes  // resize(index) function pointer
  },
  {
    "warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, warnings),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__warnings,  // size() function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__warnings,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__warnings,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__warnings  // resize(index) function pointer
  },
  {
    "errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemStatus, errors),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__errors,  // size() function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__errors,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__errors,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__errors,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__errors,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__errors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members = {
  "guardian_rtc_msgs__msg",  // message namespace
  "SystemStatus",  // message name
  13,  // number of fields
  sizeof(guardian_rtc_msgs__msg__SystemStatus),
  guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array,  // message members
  guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle = {
  0,
  &guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guardian_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guardian_rtc_msgs, msg, SystemStatus)() {
  guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier) {
    guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guardian_rtc_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

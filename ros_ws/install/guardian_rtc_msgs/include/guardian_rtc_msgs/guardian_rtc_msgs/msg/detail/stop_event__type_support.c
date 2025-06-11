// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guardian_rtc_msgs/msg/detail/stop_event__rosidl_typesupport_introspection_c.h"
#include "guardian_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guardian_rtc_msgs/msg/detail/stop_event__functions.h"
#include "guardian_rtc_msgs/msg/detail/stop_event__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `message`
// Member `affected_joints`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_velocities`
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guardian_rtc_msgs__msg__StopEvent__init(message_memory);
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_fini_function(void * message_memory)
{
  guardian_rtc_msgs__msg__StopEvent__fini(message_memory);
}

size_t guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__affected_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__affected_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__affected_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__affected_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__affected_joints(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__affected_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__affected_joints(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__affected_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__joint_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__joint_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__joint_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__joint_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_member_array[10] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinetic_energy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, kinetic_energy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "affected_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, affected_joints),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__affected_joints,  // size() function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__affected_joints,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__affected_joints,  // get(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__affected_joints,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__affected_joints,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__affected_joints  // resize(index) function pointer
  },
  {
    "joint_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, joint_velocities),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__joint_velocities,  // size() function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_velocities,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_velocities,  // get(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__joint_velocities,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__joint_velocities,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__joint_velocities  // resize(index) function pointer
  },
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, joint_positions),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__size_function__StopEvent__joint_positions,  // size() function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_const_function__StopEvent__joint_positions,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__get_function__StopEvent__joint_positions,  // get(index) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__fetch_function__StopEvent__joint_positions,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__assign_function__StopEvent__joint_positions,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__resize_function__StopEvent__joint_positions  // resize(index) function pointer
  },
  {
    "was_emergency_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, was_emergency_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "was_controlled_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__StopEvent, was_controlled_stop),  // bytes offset in struct
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
    offsetof(guardian_rtc_msgs__msg__StopEvent, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_members = {
  "guardian_rtc_msgs__msg",  // message namespace
  "StopEvent",  // message name
  10,  // number of fields
  sizeof(guardian_rtc_msgs__msg__StopEvent),
  guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_member_array,  // message members
  guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_type_support_handle = {
  0,
  &guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guardian_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guardian_rtc_msgs, msg, StopEvent)() {
  guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_type_support_handle.typesupport_identifier) {
    guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guardian_rtc_msgs__msg__StopEvent__rosidl_typesupport_introspection_c__StopEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

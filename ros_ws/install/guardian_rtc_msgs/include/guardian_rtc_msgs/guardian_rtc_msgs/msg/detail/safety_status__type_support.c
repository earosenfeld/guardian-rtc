// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guardian_rtc_msgs/msg/detail/safety_status__rosidl_typesupport_introspection_c.h"
#include "guardian_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guardian_rtc_msgs/msg/detail/safety_status__functions.h"
#include "guardian_rtc_msgs/msg/detail/safety_status__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `sensor_readings`
// Member `safety_thresholds`
// Member `safety_checks_passed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `active_warnings`
// Member `active_errors`
// Member `safety_events`
// Member `safety_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guardian_rtc_msgs__msg__SafetyStatus__init(message_memory);
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_fini_function(void * message_memory)
{
  guardian_rtc_msgs__msg__SafetyStatus__fini(message_memory);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__sensor_readings(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__sensor_readings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__sensor_readings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__sensor_readings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__sensor_readings(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__sensor_readings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__sensor_readings(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__sensor_readings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_thresholds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_thresholds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_checks_passed(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_checks_passed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_checks_passed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_checks_passed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_checks_passed(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_checks_passed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_checks_passed(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_checks_passed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__active_warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__active_warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__active_warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__active_warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__active_errors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_errors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_errors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__active_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_errors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__active_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_errors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__active_errors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_events(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_events(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_events(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_events(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_events(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_events(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_member_array[14] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_safe_to_operate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, is_safe_to_operate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_emergency_stop_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, is_emergency_stop_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_safety_system_healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, is_safety_system_healthy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_readings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, sensor_readings),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__sensor_readings,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__sensor_readings,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__sensor_readings,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__sensor_readings,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__sensor_readings,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__sensor_readings  // resize(index) function pointer
  },
  {
    "safety_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_thresholds),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_thresholds,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_thresholds,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_thresholds,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_thresholds,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_thresholds,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_thresholds  // resize(index) function pointer
  },
  {
    "safety_checks_passed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_checks_passed),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_checks_passed,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_checks_passed,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_checks_passed,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_checks_passed,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_checks_passed,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_checks_passed  // resize(index) function pointer
  },
  {
    "active_warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, active_warnings),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__active_warnings,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_warnings,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_warnings,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__active_warnings,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__active_warnings,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__active_warnings  // resize(index) function pointer
  },
  {
    "active_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, active_errors),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__active_errors,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__active_errors,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__active_errors,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__active_errors,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__active_errors,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__active_errors  // resize(index) function pointer
  },
  {
    "safety_events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_events),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__size_function__SafetyStatus__safety_events,  // size() function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__SafetyStatus__safety_events,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__get_function__SafetyStatus__safety_events,  // get(index) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__SafetyStatus__safety_events,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__assign_function__SafetyStatus__safety_events,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__resize_function__SafetyStatus__safety_events  // resize(index) function pointer
  },
  {
    "safety_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_checks_failed_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, safety_checks_failed_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_safety_check_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SafetyStatus, last_safety_check_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_members = {
  "guardian_rtc_msgs__msg",  // message namespace
  "SafetyStatus",  // message name
  14,  // number of fields
  sizeof(guardian_rtc_msgs__msg__SafetyStatus),
  guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_member_array,  // message members
  guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_type_support_handle = {
  0,
  &guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guardian_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guardian_rtc_msgs, msg, SafetyStatus)() {
  guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_type_support_handle.typesupport_identifier) {
    guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guardian_rtc_msgs__msg__SafetyStatus__rosidl_typesupport_introspection_c__SafetyStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

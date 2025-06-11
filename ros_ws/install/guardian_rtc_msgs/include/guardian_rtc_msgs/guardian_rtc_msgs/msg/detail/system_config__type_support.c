// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guardian_rtc_msgs/msg/detail/system_config__rosidl_typesupport_introspection_c.h"
#include "guardian_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guardian_rtc_msgs/msg/detail/system_config__functions.h"
#include "guardian_rtc_msgs/msg/detail/system_config__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `config_version`
// Member `config_name`
// Member `safety_rules`
// Member `enabled_features`
// Member `disabled_features`
// Member `network_interfaces`
// Member `network_protocols`
// Member `log_level`
// Member `log_categories`
// Member `custom_parameters`
// Member `config_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `safety_thresholds`
// Member `warning_thresholds`
// Member `critical_thresholds`
// Member `system_parameters`
// Member `network_ports`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guardian_rtc_msgs__msg__SystemConfig__init(message_memory);
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_fini_function(void * message_memory)
{
  guardian_rtc_msgs__msg__SystemConfig__fini(message_memory);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__safety_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__safety_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_thresholds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__safety_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_thresholds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__safety_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__warning_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__warning_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__warning_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__warning_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__warning_thresholds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__warning_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__warning_thresholds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__warning_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__critical_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__critical_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__critical_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__critical_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__critical_thresholds(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__critical_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__critical_thresholds(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__critical_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__safety_rules(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_rules(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_rules(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__safety_rules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_rules(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__safety_rules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_rules(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__safety_rules(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__system_parameters(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__system_parameters(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__system_parameters(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__system_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__system_parameters(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__system_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__system_parameters(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__system_parameters(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__enabled_features(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__enabled_features(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__enabled_features(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__enabled_features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__enabled_features(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__enabled_features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__enabled_features(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__enabled_features(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__disabled_features(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__disabled_features(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__disabled_features(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__disabled_features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__disabled_features(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__disabled_features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__disabled_features(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__disabled_features(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_interfaces(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_interfaces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_interfaces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_interfaces(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_interfaces(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_interfaces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_ports(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_ports(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_ports(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_ports(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_ports(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_ports(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_ports(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_ports(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_protocols(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_protocols(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_protocols(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_protocols(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_protocols(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_protocols(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_protocols(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_protocols(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__log_categories(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__log_categories(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__log_categories(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__log_categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__log_categories(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__log_categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__log_categories(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__log_categories(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__custom_parameters(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__custom_parameters(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__custom_parameters(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__custom_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__custom_parameters(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__custom_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__custom_parameters(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__custom_parameters(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_member_array[21] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, config_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, config_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_default_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, is_default_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, safety_thresholds),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__safety_thresholds,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_thresholds,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_thresholds,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__safety_thresholds,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__safety_thresholds,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__safety_thresholds  // resize(index) function pointer
  },
  {
    "warning_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, warning_thresholds),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__warning_thresholds,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__warning_thresholds,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__warning_thresholds,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__warning_thresholds,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__warning_thresholds,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__warning_thresholds  // resize(index) function pointer
  },
  {
    "critical_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, critical_thresholds),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__critical_thresholds,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__critical_thresholds,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__critical_thresholds,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__critical_thresholds,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__critical_thresholds,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__critical_thresholds  // resize(index) function pointer
  },
  {
    "safety_rules",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, safety_rules),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__safety_rules,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__safety_rules,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__safety_rules,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__safety_rules,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__safety_rules,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__safety_rules  // resize(index) function pointer
  },
  {
    "system_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, system_parameters),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__system_parameters,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__system_parameters,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__system_parameters,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__system_parameters,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__system_parameters,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__system_parameters  // resize(index) function pointer
  },
  {
    "enabled_features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, enabled_features),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__enabled_features,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__enabled_features,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__enabled_features,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__enabled_features,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__enabled_features,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__enabled_features  // resize(index) function pointer
  },
  {
    "disabled_features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, disabled_features),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__disabled_features,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__disabled_features,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__disabled_features,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__disabled_features,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__disabled_features,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__disabled_features  // resize(index) function pointer
  },
  {
    "network_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, network_interfaces),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_interfaces,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_interfaces,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_interfaces,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_interfaces,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_interfaces,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_interfaces  // resize(index) function pointer
  },
  {
    "network_ports",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, network_ports),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_ports,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_ports,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_ports,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_ports,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_ports,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_ports  // resize(index) function pointer
  },
  {
    "network_protocols",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, network_protocols),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__network_protocols,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__network_protocols,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__network_protocols,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__network_protocols,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__network_protocols,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__network_protocols  // resize(index) function pointer
  },
  {
    "log_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, log_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "log_categories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, log_categories),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__log_categories,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__log_categories,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__log_categories,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__log_categories,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__log_categories,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__log_categories  // resize(index) function pointer
  },
  {
    "enable_debug_logging",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, enable_debug_logging),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_performance_logging",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, enable_performance_logging),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, custom_parameters),  // bytes offset in struct
    NULL,  // default value
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__size_function__SystemConfig__custom_parameters,  // size() function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_const_function__SystemConfig__custom_parameters,  // get_const(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__get_function__SystemConfig__custom_parameters,  // get(index) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__fetch_function__SystemConfig__custom_parameters,  // fetch(index, &value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__assign_function__SystemConfig__custom_parameters,  // assign(index, value) function pointer
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__resize_function__SystemConfig__custom_parameters  // resize(index) function pointer
  },
  {
    "config_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, config_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requires_restart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs__msg__SystemConfig, requires_restart),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_members = {
  "guardian_rtc_msgs__msg",  // message namespace
  "SystemConfig",  // message name
  21,  // number of fields
  sizeof(guardian_rtc_msgs__msg__SystemConfig),
  guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_member_array,  // message members
  guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_type_support_handle = {
  0,
  &guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guardian_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guardian_rtc_msgs, msg, SystemConfig)() {
  guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_type_support_handle.typesupport_identifier) {
    guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guardian_rtc_msgs__msg__SystemConfig__rosidl_typesupport_introspection_c__SystemConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice
#include "guardian_rtc_msgs/msg/detail/system_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
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

bool
guardian_rtc_msgs__msg__SystemConfig__init(guardian_rtc_msgs__msg__SystemConfig * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // config_version
  if (!rosidl_runtime_c__String__init(&msg->config_version)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // config_name
  if (!rosidl_runtime_c__String__init(&msg->config_name)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // is_default_config
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__init(&msg->safety_thresholds, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // warning_thresholds
  if (!rosidl_runtime_c__float__Sequence__init(&msg->warning_thresholds, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // critical_thresholds
  if (!rosidl_runtime_c__float__Sequence__init(&msg->critical_thresholds, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // safety_rules
  if (!rosidl_runtime_c__String__Sequence__init(&msg->safety_rules, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // system_parameters
  if (!rosidl_runtime_c__float__Sequence__init(&msg->system_parameters, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // enabled_features
  if (!rosidl_runtime_c__String__Sequence__init(&msg->enabled_features, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // disabled_features
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disabled_features, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // network_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->network_interfaces, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // network_ports
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->network_ports, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // network_protocols
  if (!rosidl_runtime_c__String__Sequence__init(&msg->network_protocols, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // log_level
  if (!rosidl_runtime_c__String__init(&msg->log_level)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // log_categories
  if (!rosidl_runtime_c__String__Sequence__init(&msg->log_categories, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // enable_debug_logging
  // enable_performance_logging
  // custom_parameters
  if (!rosidl_runtime_c__String__Sequence__init(&msg->custom_parameters, 0)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // config_description
  if (!rosidl_runtime_c__String__init(&msg->config_description)) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
    return false;
  }
  // requires_restart
  return true;
}

void
guardian_rtc_msgs__msg__SystemConfig__fini(guardian_rtc_msgs__msg__SystemConfig * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // config_version
  rosidl_runtime_c__String__fini(&msg->config_version);
  // config_name
  rosidl_runtime_c__String__fini(&msg->config_name);
  // is_default_config
  // safety_thresholds
  rosidl_runtime_c__float__Sequence__fini(&msg->safety_thresholds);
  // warning_thresholds
  rosidl_runtime_c__float__Sequence__fini(&msg->warning_thresholds);
  // critical_thresholds
  rosidl_runtime_c__float__Sequence__fini(&msg->critical_thresholds);
  // safety_rules
  rosidl_runtime_c__String__Sequence__fini(&msg->safety_rules);
  // system_parameters
  rosidl_runtime_c__float__Sequence__fini(&msg->system_parameters);
  // enabled_features
  rosidl_runtime_c__String__Sequence__fini(&msg->enabled_features);
  // disabled_features
  rosidl_runtime_c__String__Sequence__fini(&msg->disabled_features);
  // network_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->network_interfaces);
  // network_ports
  rosidl_runtime_c__uint32__Sequence__fini(&msg->network_ports);
  // network_protocols
  rosidl_runtime_c__String__Sequence__fini(&msg->network_protocols);
  // log_level
  rosidl_runtime_c__String__fini(&msg->log_level);
  // log_categories
  rosidl_runtime_c__String__Sequence__fini(&msg->log_categories);
  // enable_debug_logging
  // enable_performance_logging
  // custom_parameters
  rosidl_runtime_c__String__Sequence__fini(&msg->custom_parameters);
  // config_description
  rosidl_runtime_c__String__fini(&msg->config_description);
  // requires_restart
}

bool
guardian_rtc_msgs__msg__SystemConfig__are_equal(const guardian_rtc_msgs__msg__SystemConfig * lhs, const guardian_rtc_msgs__msg__SystemConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // config_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->config_version), &(rhs->config_version)))
  {
    return false;
  }
  // config_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->config_name), &(rhs->config_name)))
  {
    return false;
  }
  // is_default_config
  if (lhs->is_default_config != rhs->is_default_config) {
    return false;
  }
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->safety_thresholds), &(rhs->safety_thresholds)))
  {
    return false;
  }
  // warning_thresholds
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->warning_thresholds), &(rhs->warning_thresholds)))
  {
    return false;
  }
  // critical_thresholds
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->critical_thresholds), &(rhs->critical_thresholds)))
  {
    return false;
  }
  // safety_rules
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->safety_rules), &(rhs->safety_rules)))
  {
    return false;
  }
  // system_parameters
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->system_parameters), &(rhs->system_parameters)))
  {
    return false;
  }
  // enabled_features
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->enabled_features), &(rhs->enabled_features)))
  {
    return false;
  }
  // disabled_features
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disabled_features), &(rhs->disabled_features)))
  {
    return false;
  }
  // network_interfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->network_interfaces), &(rhs->network_interfaces)))
  {
    return false;
  }
  // network_ports
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->network_ports), &(rhs->network_ports)))
  {
    return false;
  }
  // network_protocols
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->network_protocols), &(rhs->network_protocols)))
  {
    return false;
  }
  // log_level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->log_level), &(rhs->log_level)))
  {
    return false;
  }
  // log_categories
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->log_categories), &(rhs->log_categories)))
  {
    return false;
  }
  // enable_debug_logging
  if (lhs->enable_debug_logging != rhs->enable_debug_logging) {
    return false;
  }
  // enable_performance_logging
  if (lhs->enable_performance_logging != rhs->enable_performance_logging) {
    return false;
  }
  // custom_parameters
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->custom_parameters), &(rhs->custom_parameters)))
  {
    return false;
  }
  // config_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->config_description), &(rhs->config_description)))
  {
    return false;
  }
  // requires_restart
  if (lhs->requires_restart != rhs->requires_restart) {
    return false;
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SystemConfig__copy(
  const guardian_rtc_msgs__msg__SystemConfig * input,
  guardian_rtc_msgs__msg__SystemConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // config_version
  if (!rosidl_runtime_c__String__copy(
      &(input->config_version), &(output->config_version)))
  {
    return false;
  }
  // config_name
  if (!rosidl_runtime_c__String__copy(
      &(input->config_name), &(output->config_name)))
  {
    return false;
  }
  // is_default_config
  output->is_default_config = input->is_default_config;
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->safety_thresholds), &(output->safety_thresholds)))
  {
    return false;
  }
  // warning_thresholds
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->warning_thresholds), &(output->warning_thresholds)))
  {
    return false;
  }
  // critical_thresholds
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->critical_thresholds), &(output->critical_thresholds)))
  {
    return false;
  }
  // safety_rules
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->safety_rules), &(output->safety_rules)))
  {
    return false;
  }
  // system_parameters
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->system_parameters), &(output->system_parameters)))
  {
    return false;
  }
  // enabled_features
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->enabled_features), &(output->enabled_features)))
  {
    return false;
  }
  // disabled_features
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disabled_features), &(output->disabled_features)))
  {
    return false;
  }
  // network_interfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->network_interfaces), &(output->network_interfaces)))
  {
    return false;
  }
  // network_ports
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->network_ports), &(output->network_ports)))
  {
    return false;
  }
  // network_protocols
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->network_protocols), &(output->network_protocols)))
  {
    return false;
  }
  // log_level
  if (!rosidl_runtime_c__String__copy(
      &(input->log_level), &(output->log_level)))
  {
    return false;
  }
  // log_categories
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->log_categories), &(output->log_categories)))
  {
    return false;
  }
  // enable_debug_logging
  output->enable_debug_logging = input->enable_debug_logging;
  // enable_performance_logging
  output->enable_performance_logging = input->enable_performance_logging;
  // custom_parameters
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->custom_parameters), &(output->custom_parameters)))
  {
    return false;
  }
  // config_description
  if (!rosidl_runtime_c__String__copy(
      &(input->config_description), &(output->config_description)))
  {
    return false;
  }
  // requires_restart
  output->requires_restart = input->requires_restart;
  return true;
}

guardian_rtc_msgs__msg__SystemConfig *
guardian_rtc_msgs__msg__SystemConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemConfig * msg = (guardian_rtc_msgs__msg__SystemConfig *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SystemConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guardian_rtc_msgs__msg__SystemConfig));
  bool success = guardian_rtc_msgs__msg__SystemConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guardian_rtc_msgs__msg__SystemConfig__destroy(guardian_rtc_msgs__msg__SystemConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guardian_rtc_msgs__msg__SystemConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__init(guardian_rtc_msgs__msg__SystemConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemConfig * data = NULL;

  if (size) {
    data = (guardian_rtc_msgs__msg__SystemConfig *)allocator.zero_allocate(size, sizeof(guardian_rtc_msgs__msg__SystemConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guardian_rtc_msgs__msg__SystemConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guardian_rtc_msgs__msg__SystemConfig__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
guardian_rtc_msgs__msg__SystemConfig__Sequence__fini(guardian_rtc_msgs__msg__SystemConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      guardian_rtc_msgs__msg__SystemConfig__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

guardian_rtc_msgs__msg__SystemConfig__Sequence *
guardian_rtc_msgs__msg__SystemConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemConfig__Sequence * array = (guardian_rtc_msgs__msg__SystemConfig__Sequence *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SystemConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guardian_rtc_msgs__msg__SystemConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guardian_rtc_msgs__msg__SystemConfig__Sequence__destroy(guardian_rtc_msgs__msg__SystemConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guardian_rtc_msgs__msg__SystemConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__are_equal(const guardian_rtc_msgs__msg__SystemConfig__Sequence * lhs, const guardian_rtc_msgs__msg__SystemConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guardian_rtc_msgs__msg__SystemConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__copy(
  const guardian_rtc_msgs__msg__SystemConfig__Sequence * input,
  guardian_rtc_msgs__msg__SystemConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guardian_rtc_msgs__msg__SystemConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guardian_rtc_msgs__msg__SystemConfig * data =
      (guardian_rtc_msgs__msg__SystemConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guardian_rtc_msgs__msg__SystemConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guardian_rtc_msgs__msg__SystemConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guardian_rtc_msgs__msg__SystemConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

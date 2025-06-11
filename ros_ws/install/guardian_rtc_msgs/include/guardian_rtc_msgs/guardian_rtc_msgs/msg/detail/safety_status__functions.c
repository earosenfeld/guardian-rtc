// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "guardian_rtc_msgs/msg/detail/safety_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sensor_readings`
// Member `safety_thresholds`
// Member `safety_checks_passed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `active_warnings`
// Member `active_errors`
// Member `safety_events`
// Member `safety_message`
#include "rosidl_runtime_c/string_functions.h"

bool
guardian_rtc_msgs__msg__SafetyStatus__init(guardian_rtc_msgs__msg__SafetyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_state
  // is_safe_to_operate
  // is_emergency_stop_active
  // is_safety_system_healthy
  // sensor_readings
  if (!rosidl_runtime_c__float__Sequence__init(&msg->sensor_readings, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__init(&msg->safety_thresholds, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_checks_passed
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->safety_checks_passed, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_warnings, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_errors, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_events
  if (!rosidl_runtime_c__String__Sequence__init(&msg->safety_events, 0)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_message
  if (!rosidl_runtime_c__String__init(&msg->safety_message)) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_checks_failed_count
  // last_safety_check_timestamp
  return true;
}

void
guardian_rtc_msgs__msg__SafetyStatus__fini(guardian_rtc_msgs__msg__SafetyStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // safety_state
  // is_safe_to_operate
  // is_emergency_stop_active
  // is_safety_system_healthy
  // sensor_readings
  rosidl_runtime_c__float__Sequence__fini(&msg->sensor_readings);
  // safety_thresholds
  rosidl_runtime_c__float__Sequence__fini(&msg->safety_thresholds);
  // safety_checks_passed
  rosidl_runtime_c__boolean__Sequence__fini(&msg->safety_checks_passed);
  // active_warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->active_warnings);
  // active_errors
  rosidl_runtime_c__String__Sequence__fini(&msg->active_errors);
  // safety_events
  rosidl_runtime_c__String__Sequence__fini(&msg->safety_events);
  // safety_message
  rosidl_runtime_c__String__fini(&msg->safety_message);
  // safety_checks_failed_count
  // last_safety_check_timestamp
}

bool
guardian_rtc_msgs__msg__SafetyStatus__are_equal(const guardian_rtc_msgs__msg__SafetyStatus * lhs, const guardian_rtc_msgs__msg__SafetyStatus * rhs)
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
  // safety_state
  if (lhs->safety_state != rhs->safety_state) {
    return false;
  }
  // is_safe_to_operate
  if (lhs->is_safe_to_operate != rhs->is_safe_to_operate) {
    return false;
  }
  // is_emergency_stop_active
  if (lhs->is_emergency_stop_active != rhs->is_emergency_stop_active) {
    return false;
  }
  // is_safety_system_healthy
  if (lhs->is_safety_system_healthy != rhs->is_safety_system_healthy) {
    return false;
  }
  // sensor_readings
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->sensor_readings), &(rhs->sensor_readings)))
  {
    return false;
  }
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->safety_thresholds), &(rhs->safety_thresholds)))
  {
    return false;
  }
  // safety_checks_passed
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->safety_checks_passed), &(rhs->safety_checks_passed)))
  {
    return false;
  }
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_warnings), &(rhs->active_warnings)))
  {
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_errors), &(rhs->active_errors)))
  {
    return false;
  }
  // safety_events
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->safety_events), &(rhs->safety_events)))
  {
    return false;
  }
  // safety_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->safety_message), &(rhs->safety_message)))
  {
    return false;
  }
  // safety_checks_failed_count
  if (lhs->safety_checks_failed_count != rhs->safety_checks_failed_count) {
    return false;
  }
  // last_safety_check_timestamp
  if (lhs->last_safety_check_timestamp != rhs->last_safety_check_timestamp) {
    return false;
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SafetyStatus__copy(
  const guardian_rtc_msgs__msg__SafetyStatus * input,
  guardian_rtc_msgs__msg__SafetyStatus * output)
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
  // safety_state
  output->safety_state = input->safety_state;
  // is_safe_to_operate
  output->is_safe_to_operate = input->is_safe_to_operate;
  // is_emergency_stop_active
  output->is_emergency_stop_active = input->is_emergency_stop_active;
  // is_safety_system_healthy
  output->is_safety_system_healthy = input->is_safety_system_healthy;
  // sensor_readings
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->sensor_readings), &(output->sensor_readings)))
  {
    return false;
  }
  // safety_thresholds
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->safety_thresholds), &(output->safety_thresholds)))
  {
    return false;
  }
  // safety_checks_passed
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->safety_checks_passed), &(output->safety_checks_passed)))
  {
    return false;
  }
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_warnings), &(output->active_warnings)))
  {
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_errors), &(output->active_errors)))
  {
    return false;
  }
  // safety_events
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->safety_events), &(output->safety_events)))
  {
    return false;
  }
  // safety_message
  if (!rosidl_runtime_c__String__copy(
      &(input->safety_message), &(output->safety_message)))
  {
    return false;
  }
  // safety_checks_failed_count
  output->safety_checks_failed_count = input->safety_checks_failed_count;
  // last_safety_check_timestamp
  output->last_safety_check_timestamp = input->last_safety_check_timestamp;
  return true;
}

guardian_rtc_msgs__msg__SafetyStatus *
guardian_rtc_msgs__msg__SafetyStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SafetyStatus * msg = (guardian_rtc_msgs__msg__SafetyStatus *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SafetyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guardian_rtc_msgs__msg__SafetyStatus));
  bool success = guardian_rtc_msgs__msg__SafetyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guardian_rtc_msgs__msg__SafetyStatus__destroy(guardian_rtc_msgs__msg__SafetyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guardian_rtc_msgs__msg__SafetyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guardian_rtc_msgs__msg__SafetyStatus__Sequence__init(guardian_rtc_msgs__msg__SafetyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SafetyStatus * data = NULL;

  if (size) {
    data = (guardian_rtc_msgs__msg__SafetyStatus *)allocator.zero_allocate(size, sizeof(guardian_rtc_msgs__msg__SafetyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guardian_rtc_msgs__msg__SafetyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guardian_rtc_msgs__msg__SafetyStatus__fini(&data[i - 1]);
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
guardian_rtc_msgs__msg__SafetyStatus__Sequence__fini(guardian_rtc_msgs__msg__SafetyStatus__Sequence * array)
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
      guardian_rtc_msgs__msg__SafetyStatus__fini(&array->data[i]);
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

guardian_rtc_msgs__msg__SafetyStatus__Sequence *
guardian_rtc_msgs__msg__SafetyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SafetyStatus__Sequence * array = (guardian_rtc_msgs__msg__SafetyStatus__Sequence *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SafetyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guardian_rtc_msgs__msg__SafetyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guardian_rtc_msgs__msg__SafetyStatus__Sequence__destroy(guardian_rtc_msgs__msg__SafetyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guardian_rtc_msgs__msg__SafetyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guardian_rtc_msgs__msg__SafetyStatus__Sequence__are_equal(const guardian_rtc_msgs__msg__SafetyStatus__Sequence * lhs, const guardian_rtc_msgs__msg__SafetyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guardian_rtc_msgs__msg__SafetyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SafetyStatus__Sequence__copy(
  const guardian_rtc_msgs__msg__SafetyStatus__Sequence * input,
  guardian_rtc_msgs__msg__SafetyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guardian_rtc_msgs__msg__SafetyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guardian_rtc_msgs__msg__SafetyStatus * data =
      (guardian_rtc_msgs__msg__SafetyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guardian_rtc_msgs__msg__SafetyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guardian_rtc_msgs__msg__SafetyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guardian_rtc_msgs__msg__SafetyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "guardian_rtc_msgs/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `health_message`
// Member `active_nodes`
// Member `warnings`
// Member `errors`
#include "rosidl_runtime_c/string_functions.h"

bool
guardian_rtc_msgs__msg__SystemStatus__init(guardian_rtc_msgs__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // state
  // is_healthy
  // health_message
  if (!rosidl_runtime_c__String__init(&msg->health_message)) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // battery_voltage
  // battery_percentage
  // is_charging
  // cpu_usage
  // memory_usage
  // temperature
  // active_nodes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_nodes, 0)) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->warnings, 0)) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->errors, 0)) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
guardian_rtc_msgs__msg__SystemStatus__fini(guardian_rtc_msgs__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // state
  // is_healthy
  // health_message
  rosidl_runtime_c__String__fini(&msg->health_message);
  // battery_voltage
  // battery_percentage
  // is_charging
  // cpu_usage
  // memory_usage
  // temperature
  // active_nodes
  rosidl_runtime_c__String__Sequence__fini(&msg->active_nodes);
  // warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->warnings);
  // errors
  rosidl_runtime_c__String__Sequence__fini(&msg->errors);
}

bool
guardian_rtc_msgs__msg__SystemStatus__are_equal(const guardian_rtc_msgs__msg__SystemStatus * lhs, const guardian_rtc_msgs__msg__SystemStatus * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // is_healthy
  if (lhs->is_healthy != rhs->is_healthy) {
    return false;
  }
  // health_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->health_message), &(rhs->health_message)))
  {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // active_nodes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_nodes), &(rhs->active_nodes)))
  {
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->warnings), &(rhs->warnings)))
  {
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->errors), &(rhs->errors)))
  {
    return false;
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SystemStatus__copy(
  const guardian_rtc_msgs__msg__SystemStatus * input,
  guardian_rtc_msgs__msg__SystemStatus * output)
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
  // state
  output->state = input->state;
  // is_healthy
  output->is_healthy = input->is_healthy;
  // health_message
  if (!rosidl_runtime_c__String__copy(
      &(input->health_message), &(output->health_message)))
  {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // is_charging
  output->is_charging = input->is_charging;
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // temperature
  output->temperature = input->temperature;
  // active_nodes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_nodes), &(output->active_nodes)))
  {
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->warnings), &(output->warnings)))
  {
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->errors), &(output->errors)))
  {
    return false;
  }
  return true;
}

guardian_rtc_msgs__msg__SystemStatus *
guardian_rtc_msgs__msg__SystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemStatus * msg = (guardian_rtc_msgs__msg__SystemStatus *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guardian_rtc_msgs__msg__SystemStatus));
  bool success = guardian_rtc_msgs__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guardian_rtc_msgs__msg__SystemStatus__destroy(guardian_rtc_msgs__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guardian_rtc_msgs__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guardian_rtc_msgs__msg__SystemStatus__Sequence__init(guardian_rtc_msgs__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemStatus * data = NULL;

  if (size) {
    data = (guardian_rtc_msgs__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(guardian_rtc_msgs__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guardian_rtc_msgs__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guardian_rtc_msgs__msg__SystemStatus__fini(&data[i - 1]);
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
guardian_rtc_msgs__msg__SystemStatus__Sequence__fini(guardian_rtc_msgs__msg__SystemStatus__Sequence * array)
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
      guardian_rtc_msgs__msg__SystemStatus__fini(&array->data[i]);
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

guardian_rtc_msgs__msg__SystemStatus__Sequence *
guardian_rtc_msgs__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__SystemStatus__Sequence * array = (guardian_rtc_msgs__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guardian_rtc_msgs__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guardian_rtc_msgs__msg__SystemStatus__Sequence__destroy(guardian_rtc_msgs__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guardian_rtc_msgs__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guardian_rtc_msgs__msg__SystemStatus__Sequence__are_equal(const guardian_rtc_msgs__msg__SystemStatus__Sequence * lhs, const guardian_rtc_msgs__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guardian_rtc_msgs__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guardian_rtc_msgs__msg__SystemStatus__Sequence__copy(
  const guardian_rtc_msgs__msg__SystemStatus__Sequence * input,
  guardian_rtc_msgs__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guardian_rtc_msgs__msg__SystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guardian_rtc_msgs__msg__SystemStatus * data =
      (guardian_rtc_msgs__msg__SystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guardian_rtc_msgs__msg__SystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guardian_rtc_msgs__msg__SystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guardian_rtc_msgs__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

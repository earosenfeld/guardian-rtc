// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "guardian_rtc_msgs/msg/detail/control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `movement_command`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `parameters`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `command_options`
// Member `command_id`
// Member `command_message`
#include "rosidl_runtime_c/string_functions.h"

bool
guardian_rtc_msgs__msg__ControlCommand__init(guardian_rtc_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // command_type
  // movement_command
  if (!geometry_msgs__msg__Twist__init(&msg->movement_command)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__float__Sequence__init(&msg->parameters, 0)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // command_options
  if (!rosidl_runtime_c__String__Sequence__init(&msg->command_options, 0)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__init(&msg->command_id)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // sequence_number
  // requires_confirmation
  // max_velocity
  // max_acceleration
  // safety_timeout
  // command_message
  if (!rosidl_runtime_c__String__init(&msg->command_message)) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
    return false;
  }
  // is_priority_command
  return true;
}

void
guardian_rtc_msgs__msg__ControlCommand__fini(guardian_rtc_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // command_type
  // movement_command
  geometry_msgs__msg__Twist__fini(&msg->movement_command);
  // parameters
  rosidl_runtime_c__float__Sequence__fini(&msg->parameters);
  // command_options
  rosidl_runtime_c__String__Sequence__fini(&msg->command_options);
  // command_id
  rosidl_runtime_c__String__fini(&msg->command_id);
  // sequence_number
  // requires_confirmation
  // max_velocity
  // max_acceleration
  // safety_timeout
  // command_message
  rosidl_runtime_c__String__fini(&msg->command_message);
  // is_priority_command
}

bool
guardian_rtc_msgs__msg__ControlCommand__are_equal(const guardian_rtc_msgs__msg__ControlCommand * lhs, const guardian_rtc_msgs__msg__ControlCommand * rhs)
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
  // command_type
  if (lhs->command_type != rhs->command_type) {
    return false;
  }
  // movement_command
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->movement_command), &(rhs->movement_command)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // command_options
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->command_options), &(rhs->command_options)))
  {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_id), &(rhs->command_id)))
  {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  // requires_confirmation
  if (lhs->requires_confirmation != rhs->requires_confirmation) {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // safety_timeout
  if (lhs->safety_timeout != rhs->safety_timeout) {
    return false;
  }
  // command_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_message), &(rhs->command_message)))
  {
    return false;
  }
  // is_priority_command
  if (lhs->is_priority_command != rhs->is_priority_command) {
    return false;
  }
  return true;
}

bool
guardian_rtc_msgs__msg__ControlCommand__copy(
  const guardian_rtc_msgs__msg__ControlCommand * input,
  guardian_rtc_msgs__msg__ControlCommand * output)
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
  // command_type
  output->command_type = input->command_type;
  // movement_command
  if (!geometry_msgs__msg__Twist__copy(
      &(input->movement_command), &(output->movement_command)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // command_options
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->command_options), &(output->command_options)))
  {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__copy(
      &(input->command_id), &(output->command_id)))
  {
    return false;
  }
  // sequence_number
  output->sequence_number = input->sequence_number;
  // requires_confirmation
  output->requires_confirmation = input->requires_confirmation;
  // max_velocity
  output->max_velocity = input->max_velocity;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // safety_timeout
  output->safety_timeout = input->safety_timeout;
  // command_message
  if (!rosidl_runtime_c__String__copy(
      &(input->command_message), &(output->command_message)))
  {
    return false;
  }
  // is_priority_command
  output->is_priority_command = input->is_priority_command;
  return true;
}

guardian_rtc_msgs__msg__ControlCommand *
guardian_rtc_msgs__msg__ControlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__ControlCommand * msg = (guardian_rtc_msgs__msg__ControlCommand *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__ControlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guardian_rtc_msgs__msg__ControlCommand));
  bool success = guardian_rtc_msgs__msg__ControlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guardian_rtc_msgs__msg__ControlCommand__destroy(guardian_rtc_msgs__msg__ControlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guardian_rtc_msgs__msg__ControlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guardian_rtc_msgs__msg__ControlCommand__Sequence__init(guardian_rtc_msgs__msg__ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__ControlCommand * data = NULL;

  if (size) {
    data = (guardian_rtc_msgs__msg__ControlCommand *)allocator.zero_allocate(size, sizeof(guardian_rtc_msgs__msg__ControlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guardian_rtc_msgs__msg__ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guardian_rtc_msgs__msg__ControlCommand__fini(&data[i - 1]);
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
guardian_rtc_msgs__msg__ControlCommand__Sequence__fini(guardian_rtc_msgs__msg__ControlCommand__Sequence * array)
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
      guardian_rtc_msgs__msg__ControlCommand__fini(&array->data[i]);
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

guardian_rtc_msgs__msg__ControlCommand__Sequence *
guardian_rtc_msgs__msg__ControlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__ControlCommand__Sequence * array = (guardian_rtc_msgs__msg__ControlCommand__Sequence *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__ControlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guardian_rtc_msgs__msg__ControlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guardian_rtc_msgs__msg__ControlCommand__Sequence__destroy(guardian_rtc_msgs__msg__ControlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guardian_rtc_msgs__msg__ControlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guardian_rtc_msgs__msg__ControlCommand__Sequence__are_equal(const guardian_rtc_msgs__msg__ControlCommand__Sequence * lhs, const guardian_rtc_msgs__msg__ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guardian_rtc_msgs__msg__ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guardian_rtc_msgs__msg__ControlCommand__Sequence__copy(
  const guardian_rtc_msgs__msg__ControlCommand__Sequence * input,
  guardian_rtc_msgs__msg__ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guardian_rtc_msgs__msg__ControlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guardian_rtc_msgs__msg__ControlCommand * data =
      (guardian_rtc_msgs__msg__ControlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guardian_rtc_msgs__msg__ControlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guardian_rtc_msgs__msg__ControlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guardian_rtc_msgs__msg__ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

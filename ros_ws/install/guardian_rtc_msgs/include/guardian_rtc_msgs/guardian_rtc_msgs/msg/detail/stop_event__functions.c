// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice
#include "guardian_rtc_msgs/msg/detail/stop_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `message`
// Member `affected_joints`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_velocities`
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
guardian_rtc_msgs__msg__StopEvent__init(guardian_rtc_msgs__msg__StopEvent * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
    return false;
  }
  // reason
  // kinetic_energy
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
    return false;
  }
  // affected_joints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->affected_joints, 0)) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_velocities, 0)) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_positions, 0)) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
    return false;
  }
  // was_emergency_stop
  // was_controlled_stop
  // sequence_number
  return true;
}

void
guardian_rtc_msgs__msg__StopEvent__fini(guardian_rtc_msgs__msg__StopEvent * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // reason
  // kinetic_energy
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // affected_joints
  rosidl_runtime_c__String__Sequence__fini(&msg->affected_joints);
  // joint_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_velocities);
  // joint_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_positions);
  // was_emergency_stop
  // was_controlled_stop
  // sequence_number
}

bool
guardian_rtc_msgs__msg__StopEvent__are_equal(const guardian_rtc_msgs__msg__StopEvent * lhs, const guardian_rtc_msgs__msg__StopEvent * rhs)
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
  // reason
  if (lhs->reason != rhs->reason) {
    return false;
  }
  // kinetic_energy
  if (lhs->kinetic_energy != rhs->kinetic_energy) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // affected_joints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->affected_joints), &(rhs->affected_joints)))
  {
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_velocities), &(rhs->joint_velocities)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_positions), &(rhs->joint_positions)))
  {
    return false;
  }
  // was_emergency_stop
  if (lhs->was_emergency_stop != rhs->was_emergency_stop) {
    return false;
  }
  // was_controlled_stop
  if (lhs->was_controlled_stop != rhs->was_controlled_stop) {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  return true;
}

bool
guardian_rtc_msgs__msg__StopEvent__copy(
  const guardian_rtc_msgs__msg__StopEvent * input,
  guardian_rtc_msgs__msg__StopEvent * output)
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
  // reason
  output->reason = input->reason;
  // kinetic_energy
  output->kinetic_energy = input->kinetic_energy;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // affected_joints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->affected_joints), &(output->affected_joints)))
  {
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_velocities), &(output->joint_velocities)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_positions), &(output->joint_positions)))
  {
    return false;
  }
  // was_emergency_stop
  output->was_emergency_stop = input->was_emergency_stop;
  // was_controlled_stop
  output->was_controlled_stop = input->was_controlled_stop;
  // sequence_number
  output->sequence_number = input->sequence_number;
  return true;
}

guardian_rtc_msgs__msg__StopEvent *
guardian_rtc_msgs__msg__StopEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__StopEvent * msg = (guardian_rtc_msgs__msg__StopEvent *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__StopEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guardian_rtc_msgs__msg__StopEvent));
  bool success = guardian_rtc_msgs__msg__StopEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guardian_rtc_msgs__msg__StopEvent__destroy(guardian_rtc_msgs__msg__StopEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guardian_rtc_msgs__msg__StopEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guardian_rtc_msgs__msg__StopEvent__Sequence__init(guardian_rtc_msgs__msg__StopEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__StopEvent * data = NULL;

  if (size) {
    data = (guardian_rtc_msgs__msg__StopEvent *)allocator.zero_allocate(size, sizeof(guardian_rtc_msgs__msg__StopEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guardian_rtc_msgs__msg__StopEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guardian_rtc_msgs__msg__StopEvent__fini(&data[i - 1]);
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
guardian_rtc_msgs__msg__StopEvent__Sequence__fini(guardian_rtc_msgs__msg__StopEvent__Sequence * array)
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
      guardian_rtc_msgs__msg__StopEvent__fini(&array->data[i]);
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

guardian_rtc_msgs__msg__StopEvent__Sequence *
guardian_rtc_msgs__msg__StopEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guardian_rtc_msgs__msg__StopEvent__Sequence * array = (guardian_rtc_msgs__msg__StopEvent__Sequence *)allocator.allocate(sizeof(guardian_rtc_msgs__msg__StopEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guardian_rtc_msgs__msg__StopEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guardian_rtc_msgs__msg__StopEvent__Sequence__destroy(guardian_rtc_msgs__msg__StopEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guardian_rtc_msgs__msg__StopEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guardian_rtc_msgs__msg__StopEvent__Sequence__are_equal(const guardian_rtc_msgs__msg__StopEvent__Sequence * lhs, const guardian_rtc_msgs__msg__StopEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guardian_rtc_msgs__msg__StopEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guardian_rtc_msgs__msg__StopEvent__Sequence__copy(
  const guardian_rtc_msgs__msg__StopEvent__Sequence * input,
  guardian_rtc_msgs__msg__StopEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guardian_rtc_msgs__msg__StopEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guardian_rtc_msgs__msg__StopEvent * data =
      (guardian_rtc_msgs__msg__StopEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guardian_rtc_msgs__msg__StopEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guardian_rtc_msgs__msg__StopEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guardian_rtc_msgs__msg__StopEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

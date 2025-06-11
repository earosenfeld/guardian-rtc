// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__FUNCTIONS_H_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "guardian_rtc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "guardian_rtc_msgs/msg/detail/system_config__struct.h"

/// Initialize msg/SystemConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * guardian_rtc_msgs__msg__SystemConfig
 * )) before or use
 * guardian_rtc_msgs__msg__SystemConfig__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__init(guardian_rtc_msgs__msg__SystemConfig * msg);

/// Finalize msg/SystemConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
void
guardian_rtc_msgs__msg__SystemConfig__fini(guardian_rtc_msgs__msg__SystemConfig * msg);

/// Create msg/SystemConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * guardian_rtc_msgs__msg__SystemConfig__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
guardian_rtc_msgs__msg__SystemConfig *
guardian_rtc_msgs__msg__SystemConfig__create();

/// Destroy msg/SystemConfig message.
/**
 * It calls
 * guardian_rtc_msgs__msg__SystemConfig__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
void
guardian_rtc_msgs__msg__SystemConfig__destroy(guardian_rtc_msgs__msg__SystemConfig * msg);

/// Check for msg/SystemConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__are_equal(const guardian_rtc_msgs__msg__SystemConfig * lhs, const guardian_rtc_msgs__msg__SystemConfig * rhs);

/// Copy a msg/SystemConfig message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__copy(
  const guardian_rtc_msgs__msg__SystemConfig * input,
  guardian_rtc_msgs__msg__SystemConfig * output);

/// Initialize array of msg/SystemConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * guardian_rtc_msgs__msg__SystemConfig__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__init(guardian_rtc_msgs__msg__SystemConfig__Sequence * array, size_t size);

/// Finalize array of msg/SystemConfig messages.
/**
 * It calls
 * guardian_rtc_msgs__msg__SystemConfig__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
void
guardian_rtc_msgs__msg__SystemConfig__Sequence__fini(guardian_rtc_msgs__msg__SystemConfig__Sequence * array);

/// Create array of msg/SystemConfig messages.
/**
 * It allocates the memory for the array and calls
 * guardian_rtc_msgs__msg__SystemConfig__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
guardian_rtc_msgs__msg__SystemConfig__Sequence *
guardian_rtc_msgs__msg__SystemConfig__Sequence__create(size_t size);

/// Destroy array of msg/SystemConfig messages.
/**
 * It calls
 * guardian_rtc_msgs__msg__SystemConfig__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
void
guardian_rtc_msgs__msg__SystemConfig__Sequence__destroy(guardian_rtc_msgs__msg__SystemConfig__Sequence * array);

/// Check for msg/SystemConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__are_equal(const guardian_rtc_msgs__msg__SystemConfig__Sequence * lhs, const guardian_rtc_msgs__msg__SystemConfig__Sequence * rhs);

/// Copy an array of msg/SystemConfig messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_guardian_rtc_msgs
bool
guardian_rtc_msgs__msg__SystemConfig__Sequence__copy(
  const guardian_rtc_msgs__msg__SystemConfig__Sequence * input,
  guardian_rtc_msgs__msg__SystemConfig__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__FUNCTIONS_H_

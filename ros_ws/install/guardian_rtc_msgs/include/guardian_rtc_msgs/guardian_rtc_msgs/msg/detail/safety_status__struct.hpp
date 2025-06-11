// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__guardian_rtc_msgs__msg__SafetyStatus __attribute__((deprecated))
#else
# define DEPRECATED__guardian_rtc_msgs__msg__SafetyStatus __declspec(deprecated)
#endif

namespace guardian_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyStatus_
{
  using Type = SafetyStatus_<ContainerAllocator>;

  explicit SafetyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_state = 0;
      this->is_safe_to_operate = false;
      this->is_emergency_stop_active = false;
      this->is_safety_system_healthy = false;
      this->safety_message = "";
      this->safety_checks_failed_count = 0ul;
      this->last_safety_check_timestamp = 0ul;
    }
  }

  explicit SafetyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    safety_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_state = 0;
      this->is_safe_to_operate = false;
      this->is_emergency_stop_active = false;
      this->is_safety_system_healthy = false;
      this->safety_message = "";
      this->safety_checks_failed_count = 0ul;
      this->last_safety_check_timestamp = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _safety_state_type =
    uint8_t;
  _safety_state_type safety_state;
  using _is_safe_to_operate_type =
    bool;
  _is_safe_to_operate_type is_safe_to_operate;
  using _is_emergency_stop_active_type =
    bool;
  _is_emergency_stop_active_type is_emergency_stop_active;
  using _is_safety_system_healthy_type =
    bool;
  _is_safety_system_healthy_type is_safety_system_healthy;
  using _sensor_readings_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sensor_readings_type sensor_readings;
  using _safety_thresholds_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _safety_thresholds_type safety_thresholds;
  using _safety_checks_passed_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _safety_checks_passed_type safety_checks_passed;
  using _active_warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_warnings_type active_warnings;
  using _active_errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_errors_type active_errors;
  using _safety_events_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _safety_events_type safety_events;
  using _safety_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _safety_message_type safety_message;
  using _safety_checks_failed_count_type =
    uint32_t;
  _safety_checks_failed_count_type safety_checks_failed_count;
  using _last_safety_check_timestamp_type =
    uint32_t;
  _last_safety_check_timestamp_type last_safety_check_timestamp;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__safety_state(
    const uint8_t & _arg)
  {
    this->safety_state = _arg;
    return *this;
  }
  Type & set__is_safe_to_operate(
    const bool & _arg)
  {
    this->is_safe_to_operate = _arg;
    return *this;
  }
  Type & set__is_emergency_stop_active(
    const bool & _arg)
  {
    this->is_emergency_stop_active = _arg;
    return *this;
  }
  Type & set__is_safety_system_healthy(
    const bool & _arg)
  {
    this->is_safety_system_healthy = _arg;
    return *this;
  }
  Type & set__sensor_readings(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sensor_readings = _arg;
    return *this;
  }
  Type & set__safety_thresholds(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->safety_thresholds = _arg;
    return *this;
  }
  Type & set__safety_checks_passed(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->safety_checks_passed = _arg;
    return *this;
  }
  Type & set__active_warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_warnings = _arg;
    return *this;
  }
  Type & set__active_errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_errors = _arg;
    return *this;
  }
  Type & set__safety_events(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->safety_events = _arg;
    return *this;
  }
  Type & set__safety_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->safety_message = _arg;
    return *this;
  }
  Type & set__safety_checks_failed_count(
    const uint32_t & _arg)
  {
    this->safety_checks_failed_count = _arg;
    return *this;
  }
  Type & set__last_safety_check_timestamp(
    const uint32_t & _arg)
  {
    this->last_safety_check_timestamp = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SAFETY_UNKNOWN =
    0u;
  static constexpr uint8_t SAFETY_NORMAL =
    1u;
  static constexpr uint8_t SAFETY_WARNING =
    2u;
  static constexpr uint8_t SAFETY_CRITICAL =
    3u;
  static constexpr uint8_t SAFETY_EMERGENCY =
    4u;

  // pointer types
  using RawPtr =
    guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guardian_rtc_msgs__msg__SafetyStatus
    std::shared_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guardian_rtc_msgs__msg__SafetyStatus
    std::shared_ptr<guardian_rtc_msgs::msg::SafetyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->safety_state != other.safety_state) {
      return false;
    }
    if (this->is_safe_to_operate != other.is_safe_to_operate) {
      return false;
    }
    if (this->is_emergency_stop_active != other.is_emergency_stop_active) {
      return false;
    }
    if (this->is_safety_system_healthy != other.is_safety_system_healthy) {
      return false;
    }
    if (this->sensor_readings != other.sensor_readings) {
      return false;
    }
    if (this->safety_thresholds != other.safety_thresholds) {
      return false;
    }
    if (this->safety_checks_passed != other.safety_checks_passed) {
      return false;
    }
    if (this->active_warnings != other.active_warnings) {
      return false;
    }
    if (this->active_errors != other.active_errors) {
      return false;
    }
    if (this->safety_events != other.safety_events) {
      return false;
    }
    if (this->safety_message != other.safety_message) {
      return false;
    }
    if (this->safety_checks_failed_count != other.safety_checks_failed_count) {
      return false;
    }
    if (this->last_safety_check_timestamp != other.last_safety_check_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyStatus_

// alias to use template instance with default allocator
using SafetyStatus =
  guardian_rtc_msgs::msg::SafetyStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::SAFETY_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::SAFETY_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::SAFETY_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::SAFETY_CRITICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::SAFETY_EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_

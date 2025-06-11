// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

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
# define DEPRECATED__guardian_rtc_msgs__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__guardian_rtc_msgs__msg__SystemStatus __declspec(deprecated)
#endif

namespace guardian_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->is_healthy = false;
      this->health_message = "";
      this->battery_voltage = 0.0f;
      this->battery_percentage = 0.0f;
      this->is_charging = false;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->temperature = 0.0f;
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    health_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->is_healthy = false;
      this->health_message = "";
      this->battery_voltage = 0.0f;
      this->battery_percentage = 0.0f;
      this->is_charging = false;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _state_type =
    uint8_t;
  _state_type state;
  using _is_healthy_type =
    bool;
  _is_healthy_type is_healthy;
  using _health_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _health_message_type health_message;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _cpu_usage_type =
    float;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    float;
  _memory_usage_type memory_usage;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _active_nodes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_nodes_type active_nodes;
  using _warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _warnings_type warnings;
  using _errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _errors_type errors;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__is_healthy(
    const bool & _arg)
  {
    this->is_healthy = _arg;
    return *this;
  }
  Type & set__health_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->health_message = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__cpu_usage(
    const float & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const float & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__active_nodes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_nodes = _arg;
    return *this;
  }
  Type & set__warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->warnings = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_UNKNOWN =
    0u;
  static constexpr uint8_t STATE_INITIALIZING =
    1u;
  static constexpr uint8_t STATE_READY =
    2u;
  static constexpr uint8_t STATE_OPERATIONAL =
    3u;
  static constexpr uint8_t STATE_EMERGENCY =
    4u;
  static constexpr uint8_t STATE_SHUTDOWN =
    5u;

  // pointer types
  using RawPtr =
    guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guardian_rtc_msgs__msg__SystemStatus
    std::shared_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guardian_rtc_msgs__msg__SystemStatus
    std::shared_ptr<guardian_rtc_msgs::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->is_healthy != other.is_healthy) {
      return false;
    }
    if (this->health_message != other.health_message) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->active_nodes != other.active_nodes) {
      return false;
    }
    if (this->warnings != other.warnings) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  guardian_rtc_msgs::msg::SystemStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_INITIALIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_OPERATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemStatus_<ContainerAllocator>::STATE_SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

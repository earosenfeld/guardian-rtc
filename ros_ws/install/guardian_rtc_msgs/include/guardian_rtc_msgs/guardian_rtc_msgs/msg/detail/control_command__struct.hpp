// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

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
// Member 'movement_command'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__guardian_rtc_msgs__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__guardian_rtc_msgs__msg__ControlCommand __declspec(deprecated)
#endif

namespace guardian_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    movement_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
      this->command_id = "";
      this->sequence_number = 0ul;
      this->requires_confirmation = false;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->safety_timeout = 0.0f;
      this->command_message = "";
      this->is_priority_command = false;
    }
  }

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    movement_command(_alloc, _init),
    command_id(_alloc),
    command_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
      this->command_id = "";
      this->sequence_number = 0ul;
      this->requires_confirmation = false;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->safety_timeout = 0.0f;
      this->command_message = "";
      this->is_priority_command = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _command_type_type =
    uint8_t;
  _command_type_type command_type;
  using _movement_command_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _movement_command_type movement_command;
  using _parameters_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _parameters_type parameters;
  using _command_options_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _command_options_type command_options;
  using _command_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_id_type command_id;
  using _sequence_number_type =
    uint32_t;
  _sequence_number_type sequence_number;
  using _requires_confirmation_type =
    bool;
  _requires_confirmation_type requires_confirmation;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
  using _safety_timeout_type =
    float;
  _safety_timeout_type safety_timeout;
  using _command_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_message_type command_message;
  using _is_priority_command_type =
    bool;
  _is_priority_command_type is_priority_command;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__command_type(
    const uint8_t & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__movement_command(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->movement_command = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__command_options(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->command_options = _arg;
    return *this;
  }
  Type & set__command_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__sequence_number(
    const uint32_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }
  Type & set__requires_confirmation(
    const bool & _arg)
  {
    this->requires_confirmation = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const float & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__safety_timeout(
    const float & _arg)
  {
    this->safety_timeout = _arg;
    return *this;
  }
  Type & set__command_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_message = _arg;
    return *this;
  }
  Type & set__is_priority_command(
    const bool & _arg)
  {
    this->is_priority_command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_UNKNOWN =
    0u;
  static constexpr uint8_t CMD_MOVE =
    1u;
  static constexpr uint8_t CMD_STOP =
    2u;
  static constexpr uint8_t CMD_EMERGENCY_STOP =
    3u;
  static constexpr uint8_t CMD_RESET =
    4u;
  static constexpr uint8_t CMD_CALIBRATE =
    5u;

  // pointer types
  using RawPtr =
    guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guardian_rtc_msgs__msg__ControlCommand
    std::shared_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guardian_rtc_msgs__msg__ControlCommand
    std::shared_ptr<guardian_rtc_msgs::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->movement_command != other.movement_command) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->command_options != other.command_options) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    if (this->requires_confirmation != other.requires_confirmation) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->safety_timeout != other.safety_timeout) {
      return false;
    }
    if (this->command_message != other.command_message) {
      return false;
    }
    if (this->is_priority_command != other.is_priority_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  guardian_rtc_msgs::msg::ControlCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_EMERGENCY_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlCommand_<ContainerAllocator>::CMD_CALIBRATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

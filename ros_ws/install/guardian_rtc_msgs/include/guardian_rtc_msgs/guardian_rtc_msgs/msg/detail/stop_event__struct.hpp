// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_HPP_

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
# define DEPRECATED__guardian_rtc_msgs__msg__StopEvent __attribute__((deprecated))
#else
# define DEPRECATED__guardian_rtc_msgs__msg__StopEvent __declspec(deprecated)
#endif

namespace guardian_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopEvent_
{
  using Type = StopEvent_<ContainerAllocator>;

  explicit StopEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
      this->kinetic_energy = 0.0f;
      this->message = "";
      this->was_emergency_stop = false;
      this->was_controlled_stop = false;
      this->sequence_number = 0ul;
    }
  }

  explicit StopEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
      this->kinetic_energy = 0.0f;
      this->message = "";
      this->was_emergency_stop = false;
      this->was_controlled_stop = false;
      this->sequence_number = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _reason_type =
    uint8_t;
  _reason_type reason;
  using _kinetic_energy_type =
    float;
  _kinetic_energy_type kinetic_energy;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _affected_joints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _affected_joints_type affected_joints;
  using _joint_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_velocities_type joint_velocities;
  using _joint_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_positions_type joint_positions;
  using _was_emergency_stop_type =
    bool;
  _was_emergency_stop_type was_emergency_stop;
  using _was_controlled_stop_type =
    bool;
  _was_controlled_stop_type was_controlled_stop;
  using _sequence_number_type =
    uint32_t;
  _sequence_number_type sequence_number;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__reason(
    const uint8_t & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__kinetic_energy(
    const float & _arg)
  {
    this->kinetic_energy = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__affected_joints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->affected_joints = _arg;
    return *this;
  }
  Type & set__joint_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_velocities = _arg;
    return *this;
  }
  Type & set__joint_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }
  Type & set__was_emergency_stop(
    const bool & _arg)
  {
    this->was_emergency_stop = _arg;
    return *this;
  }
  Type & set__was_controlled_stop(
    const bool & _arg)
  {
    this->was_controlled_stop = _arg;
    return *this;
  }
  Type & set__sequence_number(
    const uint32_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REASON_UNKNOWN =
    0u;
  static constexpr uint8_t REASON_KINETIC_ENERGY_LIMIT =
    1u;
  static constexpr uint8_t REASON_JOINT_LIMIT =
    2u;
  static constexpr uint8_t REASON_EMERGENCY_STOP =
    3u;
  static constexpr uint8_t REASON_SAFETY_SYSTEM =
    4u;
  static constexpr uint8_t REASON_USER_REQUEST =
    5u;

  // pointer types
  using RawPtr =
    guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guardian_rtc_msgs__msg__StopEvent
    std::shared_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guardian_rtc_msgs__msg__StopEvent
    std::shared_ptr<guardian_rtc_msgs::msg::StopEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopEvent_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->kinetic_energy != other.kinetic_energy) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->affected_joints != other.affected_joints) {
      return false;
    }
    if (this->joint_velocities != other.joint_velocities) {
      return false;
    }
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    if (this->was_emergency_stop != other.was_emergency_stop) {
      return false;
    }
    if (this->was_controlled_stop != other.was_controlled_stop) {
      return false;
    }
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopEvent_

// alias to use template instance with default allocator
using StopEvent =
  guardian_rtc_msgs::msg::StopEvent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_KINETIC_ENERGY_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_JOINT_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_EMERGENCY_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_SAFETY_SYSTEM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StopEvent_<ContainerAllocator>::REASON_USER_REQUEST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__STRUCT_HPP_

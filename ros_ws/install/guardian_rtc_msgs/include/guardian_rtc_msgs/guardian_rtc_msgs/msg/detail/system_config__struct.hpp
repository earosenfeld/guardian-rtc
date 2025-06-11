// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_HPP_

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
# define DEPRECATED__guardian_rtc_msgs__msg__SystemConfig __attribute__((deprecated))
#else
# define DEPRECATED__guardian_rtc_msgs__msg__SystemConfig __declspec(deprecated)
#endif

namespace guardian_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemConfig_
{
  using Type = SystemConfig_<ContainerAllocator>;

  explicit SystemConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->config_version = "";
      this->config_name = "";
      this->is_default_config = false;
      this->log_level = "";
      this->enable_debug_logging = false;
      this->enable_performance_logging = false;
      this->config_description = "";
      this->requires_restart = false;
    }
  }

  explicit SystemConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    config_version(_alloc),
    config_name(_alloc),
    log_level(_alloc),
    config_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->config_version = "";
      this->config_name = "";
      this->is_default_config = false;
      this->log_level = "";
      this->enable_debug_logging = false;
      this->enable_performance_logging = false;
      this->config_description = "";
      this->requires_restart = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _config_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _config_version_type config_version;
  using _config_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _config_name_type config_name;
  using _is_default_config_type =
    bool;
  _is_default_config_type is_default_config;
  using _safety_thresholds_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _safety_thresholds_type safety_thresholds;
  using _warning_thresholds_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _warning_thresholds_type warning_thresholds;
  using _critical_thresholds_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _critical_thresholds_type critical_thresholds;
  using _safety_rules_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _safety_rules_type safety_rules;
  using _system_parameters_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _system_parameters_type system_parameters;
  using _enabled_features_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _enabled_features_type enabled_features;
  using _disabled_features_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disabled_features_type disabled_features;
  using _network_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _network_interfaces_type network_interfaces;
  using _network_ports_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _network_ports_type network_ports;
  using _network_protocols_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _network_protocols_type network_protocols;
  using _log_level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _log_level_type log_level;
  using _log_categories_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _log_categories_type log_categories;
  using _enable_debug_logging_type =
    bool;
  _enable_debug_logging_type enable_debug_logging;
  using _enable_performance_logging_type =
    bool;
  _enable_performance_logging_type enable_performance_logging;
  using _custom_parameters_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _custom_parameters_type custom_parameters;
  using _config_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _config_description_type config_description;
  using _requires_restart_type =
    bool;
  _requires_restart_type requires_restart;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__config_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->config_version = _arg;
    return *this;
  }
  Type & set__config_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->config_name = _arg;
    return *this;
  }
  Type & set__is_default_config(
    const bool & _arg)
  {
    this->is_default_config = _arg;
    return *this;
  }
  Type & set__safety_thresholds(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->safety_thresholds = _arg;
    return *this;
  }
  Type & set__warning_thresholds(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->warning_thresholds = _arg;
    return *this;
  }
  Type & set__critical_thresholds(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->critical_thresholds = _arg;
    return *this;
  }
  Type & set__safety_rules(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->safety_rules = _arg;
    return *this;
  }
  Type & set__system_parameters(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->system_parameters = _arg;
    return *this;
  }
  Type & set__enabled_features(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->enabled_features = _arg;
    return *this;
  }
  Type & set__disabled_features(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disabled_features = _arg;
    return *this;
  }
  Type & set__network_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->network_interfaces = _arg;
    return *this;
  }
  Type & set__network_ports(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->network_ports = _arg;
    return *this;
  }
  Type & set__network_protocols(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->network_protocols = _arg;
    return *this;
  }
  Type & set__log_level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->log_level = _arg;
    return *this;
  }
  Type & set__log_categories(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->log_categories = _arg;
    return *this;
  }
  Type & set__enable_debug_logging(
    const bool & _arg)
  {
    this->enable_debug_logging = _arg;
    return *this;
  }
  Type & set__enable_performance_logging(
    const bool & _arg)
  {
    this->enable_performance_logging = _arg;
    return *this;
  }
  Type & set__custom_parameters(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->custom_parameters = _arg;
    return *this;
  }
  Type & set__config_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->config_description = _arg;
    return *this;
  }
  Type & set__requires_restart(
    const bool & _arg)
  {
    this->requires_restart = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guardian_rtc_msgs__msg__SystemConfig
    std::shared_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guardian_rtc_msgs__msg__SystemConfig
    std::shared_ptr<guardian_rtc_msgs::msg::SystemConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemConfig_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->config_version != other.config_version) {
      return false;
    }
    if (this->config_name != other.config_name) {
      return false;
    }
    if (this->is_default_config != other.is_default_config) {
      return false;
    }
    if (this->safety_thresholds != other.safety_thresholds) {
      return false;
    }
    if (this->warning_thresholds != other.warning_thresholds) {
      return false;
    }
    if (this->critical_thresholds != other.critical_thresholds) {
      return false;
    }
    if (this->safety_rules != other.safety_rules) {
      return false;
    }
    if (this->system_parameters != other.system_parameters) {
      return false;
    }
    if (this->enabled_features != other.enabled_features) {
      return false;
    }
    if (this->disabled_features != other.disabled_features) {
      return false;
    }
    if (this->network_interfaces != other.network_interfaces) {
      return false;
    }
    if (this->network_ports != other.network_ports) {
      return false;
    }
    if (this->network_protocols != other.network_protocols) {
      return false;
    }
    if (this->log_level != other.log_level) {
      return false;
    }
    if (this->log_categories != other.log_categories) {
      return false;
    }
    if (this->enable_debug_logging != other.enable_debug_logging) {
      return false;
    }
    if (this->enable_performance_logging != other.enable_performance_logging) {
      return false;
    }
    if (this->custom_parameters != other.custom_parameters) {
      return false;
    }
    if (this->config_description != other.config_description) {
      return false;
    }
    if (this->requires_restart != other.requires_restart) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemConfig_

// alias to use template instance with default allocator
using SystemConfig =
  guardian_rtc_msgs::msg::SystemConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__STRUCT_HPP_

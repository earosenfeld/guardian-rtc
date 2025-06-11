// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__BUILDER_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guardian_rtc_msgs/msg/detail/system_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guardian_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemConfig_requires_restart
{
public:
  explicit Init_SystemConfig_requires_restart(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  ::guardian_rtc_msgs::msg::SystemConfig requires_restart(::guardian_rtc_msgs::msg::SystemConfig::_requires_restart_type arg)
  {
    msg_.requires_restart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_config_description
{
public:
  explicit Init_SystemConfig_config_description(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_requires_restart config_description(::guardian_rtc_msgs::msg::SystemConfig::_config_description_type arg)
  {
    msg_.config_description = std::move(arg);
    return Init_SystemConfig_requires_restart(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_custom_parameters
{
public:
  explicit Init_SystemConfig_custom_parameters(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_config_description custom_parameters(::guardian_rtc_msgs::msg::SystemConfig::_custom_parameters_type arg)
  {
    msg_.custom_parameters = std::move(arg);
    return Init_SystemConfig_config_description(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_enable_performance_logging
{
public:
  explicit Init_SystemConfig_enable_performance_logging(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_custom_parameters enable_performance_logging(::guardian_rtc_msgs::msg::SystemConfig::_enable_performance_logging_type arg)
  {
    msg_.enable_performance_logging = std::move(arg);
    return Init_SystemConfig_custom_parameters(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_enable_debug_logging
{
public:
  explicit Init_SystemConfig_enable_debug_logging(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_enable_performance_logging enable_debug_logging(::guardian_rtc_msgs::msg::SystemConfig::_enable_debug_logging_type arg)
  {
    msg_.enable_debug_logging = std::move(arg);
    return Init_SystemConfig_enable_performance_logging(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_log_categories
{
public:
  explicit Init_SystemConfig_log_categories(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_enable_debug_logging log_categories(::guardian_rtc_msgs::msg::SystemConfig::_log_categories_type arg)
  {
    msg_.log_categories = std::move(arg);
    return Init_SystemConfig_enable_debug_logging(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_log_level
{
public:
  explicit Init_SystemConfig_log_level(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_log_categories log_level(::guardian_rtc_msgs::msg::SystemConfig::_log_level_type arg)
  {
    msg_.log_level = std::move(arg);
    return Init_SystemConfig_log_categories(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_network_protocols
{
public:
  explicit Init_SystemConfig_network_protocols(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_log_level network_protocols(::guardian_rtc_msgs::msg::SystemConfig::_network_protocols_type arg)
  {
    msg_.network_protocols = std::move(arg);
    return Init_SystemConfig_log_level(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_network_ports
{
public:
  explicit Init_SystemConfig_network_ports(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_network_protocols network_ports(::guardian_rtc_msgs::msg::SystemConfig::_network_ports_type arg)
  {
    msg_.network_ports = std::move(arg);
    return Init_SystemConfig_network_protocols(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_network_interfaces
{
public:
  explicit Init_SystemConfig_network_interfaces(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_network_ports network_interfaces(::guardian_rtc_msgs::msg::SystemConfig::_network_interfaces_type arg)
  {
    msg_.network_interfaces = std::move(arg);
    return Init_SystemConfig_network_ports(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_disabled_features
{
public:
  explicit Init_SystemConfig_disabled_features(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_network_interfaces disabled_features(::guardian_rtc_msgs::msg::SystemConfig::_disabled_features_type arg)
  {
    msg_.disabled_features = std::move(arg);
    return Init_SystemConfig_network_interfaces(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_enabled_features
{
public:
  explicit Init_SystemConfig_enabled_features(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_disabled_features enabled_features(::guardian_rtc_msgs::msg::SystemConfig::_enabled_features_type arg)
  {
    msg_.enabled_features = std::move(arg);
    return Init_SystemConfig_disabled_features(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_system_parameters
{
public:
  explicit Init_SystemConfig_system_parameters(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_enabled_features system_parameters(::guardian_rtc_msgs::msg::SystemConfig::_system_parameters_type arg)
  {
    msg_.system_parameters = std::move(arg);
    return Init_SystemConfig_enabled_features(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_safety_rules
{
public:
  explicit Init_SystemConfig_safety_rules(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_system_parameters safety_rules(::guardian_rtc_msgs::msg::SystemConfig::_safety_rules_type arg)
  {
    msg_.safety_rules = std::move(arg);
    return Init_SystemConfig_system_parameters(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_critical_thresholds
{
public:
  explicit Init_SystemConfig_critical_thresholds(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_safety_rules critical_thresholds(::guardian_rtc_msgs::msg::SystemConfig::_critical_thresholds_type arg)
  {
    msg_.critical_thresholds = std::move(arg);
    return Init_SystemConfig_safety_rules(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_warning_thresholds
{
public:
  explicit Init_SystemConfig_warning_thresholds(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_critical_thresholds warning_thresholds(::guardian_rtc_msgs::msg::SystemConfig::_warning_thresholds_type arg)
  {
    msg_.warning_thresholds = std::move(arg);
    return Init_SystemConfig_critical_thresholds(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_safety_thresholds
{
public:
  explicit Init_SystemConfig_safety_thresholds(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_warning_thresholds safety_thresholds(::guardian_rtc_msgs::msg::SystemConfig::_safety_thresholds_type arg)
  {
    msg_.safety_thresholds = std::move(arg);
    return Init_SystemConfig_warning_thresholds(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_is_default_config
{
public:
  explicit Init_SystemConfig_is_default_config(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_safety_thresholds is_default_config(::guardian_rtc_msgs::msg::SystemConfig::_is_default_config_type arg)
  {
    msg_.is_default_config = std::move(arg);
    return Init_SystemConfig_safety_thresholds(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_config_name
{
public:
  explicit Init_SystemConfig_config_name(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_is_default_config config_name(::guardian_rtc_msgs::msg::SystemConfig::_config_name_type arg)
  {
    msg_.config_name = std::move(arg);
    return Init_SystemConfig_is_default_config(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_config_version
{
public:
  explicit Init_SystemConfig_config_version(::guardian_rtc_msgs::msg::SystemConfig & msg)
  : msg_(msg)
  {}
  Init_SystemConfig_config_name config_version(::guardian_rtc_msgs::msg::SystemConfig::_config_version_type arg)
  {
    msg_.config_version = std::move(arg);
    return Init_SystemConfig_config_name(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

class Init_SystemConfig_timestamp
{
public:
  Init_SystemConfig_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemConfig_config_version timestamp(::guardian_rtc_msgs::msg::SystemConfig::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SystemConfig_config_version(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guardian_rtc_msgs::msg::SystemConfig>()
{
  return guardian_rtc_msgs::msg::builder::Init_SystemConfig_timestamp();
}

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__BUILDER_HPP_

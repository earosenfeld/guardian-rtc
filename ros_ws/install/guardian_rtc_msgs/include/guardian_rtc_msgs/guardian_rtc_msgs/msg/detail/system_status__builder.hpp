// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guardian_rtc_msgs/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guardian_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_errors
{
public:
  explicit Init_SystemStatus_errors(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::guardian_rtc_msgs::msg::SystemStatus errors(::guardian_rtc_msgs::msg::SystemStatus::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_warnings
{
public:
  explicit Init_SystemStatus_warnings(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_errors warnings(::guardian_rtc_msgs::msg::SystemStatus::_warnings_type arg)
  {
    msg_.warnings = std::move(arg);
    return Init_SystemStatus_errors(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_active_nodes
{
public:
  explicit Init_SystemStatus_active_nodes(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_warnings active_nodes(::guardian_rtc_msgs::msg::SystemStatus::_active_nodes_type arg)
  {
    msg_.active_nodes = std::move(arg);
    return Init_SystemStatus_warnings(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_temperature
{
public:
  explicit Init_SystemStatus_temperature(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_active_nodes temperature(::guardian_rtc_msgs::msg::SystemStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SystemStatus_active_nodes(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_usage
{
public:
  explicit Init_SystemStatus_memory_usage(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_temperature memory_usage(::guardian_rtc_msgs::msg::SystemStatus::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_SystemStatus_temperature(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_cpu_usage
{
public:
  explicit Init_SystemStatus_cpu_usage(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_usage cpu_usage(::guardian_rtc_msgs::msg::SystemStatus::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_SystemStatus_memory_usage(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_is_charging
{
public:
  explicit Init_SystemStatus_is_charging(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_cpu_usage is_charging(::guardian_rtc_msgs::msg::SystemStatus::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_SystemStatus_cpu_usage(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_battery_percentage
{
public:
  explicit Init_SystemStatus_battery_percentage(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_is_charging battery_percentage(::guardian_rtc_msgs::msg::SystemStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_SystemStatus_is_charging(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_battery_voltage
{
public:
  explicit Init_SystemStatus_battery_voltage(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_battery_percentage battery_voltage(::guardian_rtc_msgs::msg::SystemStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_SystemStatus_battery_percentage(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_health_message
{
public:
  explicit Init_SystemStatus_health_message(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_battery_voltage health_message(::guardian_rtc_msgs::msg::SystemStatus::_health_message_type arg)
  {
    msg_.health_message = std::move(arg);
    return Init_SystemStatus_battery_voltage(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_is_healthy
{
public:
  explicit Init_SystemStatus_is_healthy(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_health_message is_healthy(::guardian_rtc_msgs::msg::SystemStatus::_is_healthy_type arg)
  {
    msg_.is_healthy = std::move(arg);
    return Init_SystemStatus_health_message(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_state
{
public:
  explicit Init_SystemStatus_state(::guardian_rtc_msgs::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_is_healthy state(::guardian_rtc_msgs::msg::SystemStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SystemStatus_is_healthy(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

class Init_SystemStatus_timestamp
{
public:
  Init_SystemStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_state timestamp(::guardian_rtc_msgs::msg::SystemStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SystemStatus_state(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guardian_rtc_msgs::msg::SystemStatus>()
{
  return guardian_rtc_msgs::msg::builder::Init_SystemStatus_timestamp();
}

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

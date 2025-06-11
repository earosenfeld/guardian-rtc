// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guardian_rtc_msgs/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guardian_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyStatus_last_safety_check_timestamp
{
public:
  explicit Init_SafetyStatus_last_safety_check_timestamp(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  ::guardian_rtc_msgs::msg::SafetyStatus last_safety_check_timestamp(::guardian_rtc_msgs::msg::SafetyStatus::_last_safety_check_timestamp_type arg)
  {
    msg_.last_safety_check_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_checks_failed_count
{
public:
  explicit Init_SafetyStatus_safety_checks_failed_count(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_last_safety_check_timestamp safety_checks_failed_count(::guardian_rtc_msgs::msg::SafetyStatus::_safety_checks_failed_count_type arg)
  {
    msg_.safety_checks_failed_count = std::move(arg);
    return Init_SafetyStatus_last_safety_check_timestamp(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_message
{
public:
  explicit Init_SafetyStatus_safety_message(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_safety_checks_failed_count safety_message(::guardian_rtc_msgs::msg::SafetyStatus::_safety_message_type arg)
  {
    msg_.safety_message = std::move(arg);
    return Init_SafetyStatus_safety_checks_failed_count(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_events
{
public:
  explicit Init_SafetyStatus_safety_events(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_safety_message safety_events(::guardian_rtc_msgs::msg::SafetyStatus::_safety_events_type arg)
  {
    msg_.safety_events = std::move(arg);
    return Init_SafetyStatus_safety_message(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_active_errors
{
public:
  explicit Init_SafetyStatus_active_errors(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_safety_events active_errors(::guardian_rtc_msgs::msg::SafetyStatus::_active_errors_type arg)
  {
    msg_.active_errors = std::move(arg);
    return Init_SafetyStatus_safety_events(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_active_warnings
{
public:
  explicit Init_SafetyStatus_active_warnings(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_active_errors active_warnings(::guardian_rtc_msgs::msg::SafetyStatus::_active_warnings_type arg)
  {
    msg_.active_warnings = std::move(arg);
    return Init_SafetyStatus_active_errors(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_checks_passed
{
public:
  explicit Init_SafetyStatus_safety_checks_passed(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_active_warnings safety_checks_passed(::guardian_rtc_msgs::msg::SafetyStatus::_safety_checks_passed_type arg)
  {
    msg_.safety_checks_passed = std::move(arg);
    return Init_SafetyStatus_active_warnings(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_thresholds
{
public:
  explicit Init_SafetyStatus_safety_thresholds(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_safety_checks_passed safety_thresholds(::guardian_rtc_msgs::msg::SafetyStatus::_safety_thresholds_type arg)
  {
    msg_.safety_thresholds = std::move(arg);
    return Init_SafetyStatus_safety_checks_passed(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_sensor_readings
{
public:
  explicit Init_SafetyStatus_sensor_readings(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_safety_thresholds sensor_readings(::guardian_rtc_msgs::msg::SafetyStatus::_sensor_readings_type arg)
  {
    msg_.sensor_readings = std::move(arg);
    return Init_SafetyStatus_safety_thresholds(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_safety_system_healthy
{
public:
  explicit Init_SafetyStatus_is_safety_system_healthy(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_sensor_readings is_safety_system_healthy(::guardian_rtc_msgs::msg::SafetyStatus::_is_safety_system_healthy_type arg)
  {
    msg_.is_safety_system_healthy = std::move(arg);
    return Init_SafetyStatus_sensor_readings(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_emergency_stop_active
{
public:
  explicit Init_SafetyStatus_is_emergency_stop_active(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_safety_system_healthy is_emergency_stop_active(::guardian_rtc_msgs::msg::SafetyStatus::_is_emergency_stop_active_type arg)
  {
    msg_.is_emergency_stop_active = std::move(arg);
    return Init_SafetyStatus_is_safety_system_healthy(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_safe_to_operate
{
public:
  explicit Init_SafetyStatus_is_safe_to_operate(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_emergency_stop_active is_safe_to_operate(::guardian_rtc_msgs::msg::SafetyStatus::_is_safe_to_operate_type arg)
  {
    msg_.is_safe_to_operate = std::move(arg);
    return Init_SafetyStatus_is_emergency_stop_active(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_safety_state
{
public:
  explicit Init_SafetyStatus_safety_state(::guardian_rtc_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_safe_to_operate safety_state(::guardian_rtc_msgs::msg::SafetyStatus::_safety_state_type arg)
  {
    msg_.safety_state = std::move(arg);
    return Init_SafetyStatus_is_safe_to_operate(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_timestamp
{
public:
  Init_SafetyStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyStatus_safety_state timestamp(::guardian_rtc_msgs::msg::SafetyStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SafetyStatus_safety_state(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::SafetyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guardian_rtc_msgs::msg::SafetyStatus>()
{
  return guardian_rtc_msgs::msg::builder::Init_SafetyStatus_timestamp();
}

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_

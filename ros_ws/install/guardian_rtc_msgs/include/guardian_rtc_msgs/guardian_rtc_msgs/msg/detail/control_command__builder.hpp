// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guardian_rtc_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guardian_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_is_priority_command
{
public:
  explicit Init_ControlCommand_is_priority_command(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::guardian_rtc_msgs::msg::ControlCommand is_priority_command(::guardian_rtc_msgs::msg::ControlCommand::_is_priority_command_type arg)
  {
    msg_.is_priority_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_command_message
{
public:
  explicit Init_ControlCommand_command_message(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_is_priority_command command_message(::guardian_rtc_msgs::msg::ControlCommand::_command_message_type arg)
  {
    msg_.command_message = std::move(arg);
    return Init_ControlCommand_is_priority_command(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_safety_timeout
{
public:
  explicit Init_ControlCommand_safety_timeout(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_command_message safety_timeout(::guardian_rtc_msgs::msg::ControlCommand::_safety_timeout_type arg)
  {
    msg_.safety_timeout = std::move(arg);
    return Init_ControlCommand_command_message(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_max_acceleration
{
public:
  explicit Init_ControlCommand_max_acceleration(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_safety_timeout max_acceleration(::guardian_rtc_msgs::msg::ControlCommand::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_ControlCommand_safety_timeout(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_max_velocity
{
public:
  explicit Init_ControlCommand_max_velocity(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_max_acceleration max_velocity(::guardian_rtc_msgs::msg::ControlCommand::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_ControlCommand_max_acceleration(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_requires_confirmation
{
public:
  explicit Init_ControlCommand_requires_confirmation(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_max_velocity requires_confirmation(::guardian_rtc_msgs::msg::ControlCommand::_requires_confirmation_type arg)
  {
    msg_.requires_confirmation = std::move(arg);
    return Init_ControlCommand_max_velocity(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_sequence_number
{
public:
  explicit Init_ControlCommand_sequence_number(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_requires_confirmation sequence_number(::guardian_rtc_msgs::msg::ControlCommand::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return Init_ControlCommand_requires_confirmation(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_command_id
{
public:
  explicit Init_ControlCommand_command_id(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_sequence_number command_id(::guardian_rtc_msgs::msg::ControlCommand::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_ControlCommand_sequence_number(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_command_options
{
public:
  explicit Init_ControlCommand_command_options(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_command_id command_options(::guardian_rtc_msgs::msg::ControlCommand::_command_options_type arg)
  {
    msg_.command_options = std::move(arg);
    return Init_ControlCommand_command_id(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_parameters
{
public:
  explicit Init_ControlCommand_parameters(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_command_options parameters(::guardian_rtc_msgs::msg::ControlCommand::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_ControlCommand_command_options(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_movement_command
{
public:
  explicit Init_ControlCommand_movement_command(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_parameters movement_command(::guardian_rtc_msgs::msg::ControlCommand::_movement_command_type arg)
  {
    msg_.movement_command = std::move(arg);
    return Init_ControlCommand_parameters(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_command_type
{
public:
  explicit Init_ControlCommand_command_type(::guardian_rtc_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_movement_command command_type(::guardian_rtc_msgs::msg::ControlCommand::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_ControlCommand_movement_command(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_timestamp
{
public:
  Init_ControlCommand_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_command_type timestamp(::guardian_rtc_msgs::msg::ControlCommand::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ControlCommand_command_type(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guardian_rtc_msgs::msg::ControlCommand>()
{
  return guardian_rtc_msgs::msg::builder::Init_ControlCommand_timestamp();
}

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

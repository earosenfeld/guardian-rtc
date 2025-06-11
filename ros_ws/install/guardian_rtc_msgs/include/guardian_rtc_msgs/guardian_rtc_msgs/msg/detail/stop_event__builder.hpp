// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__BUILDER_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guardian_rtc_msgs/msg/detail/stop_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guardian_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_StopEvent_sequence_number
{
public:
  explicit Init_StopEvent_sequence_number(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  ::guardian_rtc_msgs::msg::StopEvent sequence_number(::guardian_rtc_msgs::msg::StopEvent::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_was_controlled_stop
{
public:
  explicit Init_StopEvent_was_controlled_stop(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_sequence_number was_controlled_stop(::guardian_rtc_msgs::msg::StopEvent::_was_controlled_stop_type arg)
  {
    msg_.was_controlled_stop = std::move(arg);
    return Init_StopEvent_sequence_number(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_was_emergency_stop
{
public:
  explicit Init_StopEvent_was_emergency_stop(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_was_controlled_stop was_emergency_stop(::guardian_rtc_msgs::msg::StopEvent::_was_emergency_stop_type arg)
  {
    msg_.was_emergency_stop = std::move(arg);
    return Init_StopEvent_was_controlled_stop(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_joint_positions
{
public:
  explicit Init_StopEvent_joint_positions(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_was_emergency_stop joint_positions(::guardian_rtc_msgs::msg::StopEvent::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_StopEvent_was_emergency_stop(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_joint_velocities
{
public:
  explicit Init_StopEvent_joint_velocities(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_joint_positions joint_velocities(::guardian_rtc_msgs::msg::StopEvent::_joint_velocities_type arg)
  {
    msg_.joint_velocities = std::move(arg);
    return Init_StopEvent_joint_positions(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_affected_joints
{
public:
  explicit Init_StopEvent_affected_joints(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_joint_velocities affected_joints(::guardian_rtc_msgs::msg::StopEvent::_affected_joints_type arg)
  {
    msg_.affected_joints = std::move(arg);
    return Init_StopEvent_joint_velocities(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_message
{
public:
  explicit Init_StopEvent_message(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_affected_joints message(::guardian_rtc_msgs::msg::StopEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_StopEvent_affected_joints(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_kinetic_energy
{
public:
  explicit Init_StopEvent_kinetic_energy(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_message kinetic_energy(::guardian_rtc_msgs::msg::StopEvent::_kinetic_energy_type arg)
  {
    msg_.kinetic_energy = std::move(arg);
    return Init_StopEvent_message(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_reason
{
public:
  explicit Init_StopEvent_reason(::guardian_rtc_msgs::msg::StopEvent & msg)
  : msg_(msg)
  {}
  Init_StopEvent_kinetic_energy reason(::guardian_rtc_msgs::msg::StopEvent::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_StopEvent_kinetic_energy(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

class Init_StopEvent_timestamp
{
public:
  Init_StopEvent_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopEvent_reason timestamp(::guardian_rtc_msgs::msg::StopEvent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_StopEvent_reason(msg_);
  }

private:
  ::guardian_rtc_msgs::msg::StopEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guardian_rtc_msgs::msg::StopEvent>()
{
  return guardian_rtc_msgs::msg::builder::Init_StopEvent_timestamp();
}

}  // namespace guardian_rtc_msgs

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__BUILDER_HPP_

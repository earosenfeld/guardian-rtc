// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guardian_rtc_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guardian_rtc_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'movement_command'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace guardian_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: movement_command
  {
    out << "movement_command: ";
    to_flow_style_yaml(msg.movement_command, out);
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: command_options
  {
    if (msg.command_options.size() == 0) {
      out << "command_options: []";
    } else {
      out << "command_options: [";
      size_t pending_items = msg.command_options.size();
      for (auto item : msg.command_options) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: sequence_number
  {
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << ", ";
  }

  // member: requires_confirmation
  {
    out << "requires_confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_confirmation, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: safety_timeout
  {
    out << "safety_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_timeout, out);
    out << ", ";
  }

  // member: command_message
  {
    out << "command_message: ";
    rosidl_generator_traits::value_to_yaml(msg.command_message, out);
    out << ", ";
  }

  // member: is_priority_command
  {
    out << "is_priority_command: ";
    rosidl_generator_traits::value_to_yaml(msg.is_priority_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: movement_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_command:\n";
    to_block_style_yaml(msg.movement_command, out, indentation + 2);
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: command_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_options.size() == 0) {
      out << "command_options: []\n";
    } else {
      out << "command_options:\n";
      for (auto item : msg.command_options) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: sequence_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << "\n";
  }

  // member: requires_confirmation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requires_confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_confirmation, out);
    out << "\n";
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: safety_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_timeout, out);
    out << "\n";
  }

  // member: command_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_message: ";
    rosidl_generator_traits::value_to_yaml(msg.command_message, out);
    out << "\n";
  }

  // member: is_priority_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_priority_command: ";
    rosidl_generator_traits::value_to_yaml(msg.is_priority_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace guardian_rtc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use guardian_rtc_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const guardian_rtc_msgs::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  guardian_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guardian_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const guardian_rtc_msgs::msg::ControlCommand & msg)
{
  return guardian_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guardian_rtc_msgs::msg::ControlCommand>()
{
  return "guardian_rtc_msgs::msg::ControlCommand";
}

template<>
inline const char * name<guardian_rtc_msgs::msg::ControlCommand>()
{
  return "guardian_rtc_msgs/msg/ControlCommand";
}

template<>
struct has_fixed_size<guardian_rtc_msgs::msg::ControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guardian_rtc_msgs::msg::ControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guardian_rtc_msgs::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

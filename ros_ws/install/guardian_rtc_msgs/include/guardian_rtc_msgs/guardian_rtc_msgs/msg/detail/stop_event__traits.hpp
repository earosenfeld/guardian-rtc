// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guardian_rtc_msgs:msg/StopEvent.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__TRAITS_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guardian_rtc_msgs/msg/detail/stop_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace guardian_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: kinetic_energy
  {
    out << "kinetic_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.kinetic_energy, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: affected_joints
  {
    if (msg.affected_joints.size() == 0) {
      out << "affected_joints: []";
    } else {
      out << "affected_joints: [";
      size_t pending_items = msg.affected_joints.size();
      for (auto item : msg.affected_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocities
  {
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []";
    } else {
      out << "joint_velocities: [";
      size_t pending_items = msg.joint_velocities.size();
      for (auto item : msg.joint_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: was_emergency_stop
  {
    out << "was_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.was_emergency_stop, out);
    out << ", ";
  }

  // member: was_controlled_stop
  {
    out << "was_controlled_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.was_controlled_stop, out);
    out << ", ";
  }

  // member: sequence_number
  {
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StopEvent & msg,
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

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }

  // member: kinetic_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinetic_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.kinetic_energy, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: affected_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.affected_joints.size() == 0) {
      out << "affected_joints: []\n";
    } else {
      out << "affected_joints:\n";
      for (auto item : msg.affected_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []\n";
    } else {
      out << "joint_velocities:\n";
      for (auto item : msg.joint_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: was_emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "was_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.was_emergency_stop, out);
    out << "\n";
  }

  // member: was_controlled_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "was_controlled_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.was_controlled_stop, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopEvent & msg, bool use_flow_style = false)
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
  const guardian_rtc_msgs::msg::StopEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  guardian_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guardian_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const guardian_rtc_msgs::msg::StopEvent & msg)
{
  return guardian_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guardian_rtc_msgs::msg::StopEvent>()
{
  return "guardian_rtc_msgs::msg::StopEvent";
}

template<>
inline const char * name<guardian_rtc_msgs::msg::StopEvent>()
{
  return "guardian_rtc_msgs/msg/StopEvent";
}

template<>
struct has_fixed_size<guardian_rtc_msgs::msg::StopEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guardian_rtc_msgs::msg::StopEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guardian_rtc_msgs::msg::StopEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__STOP_EVENT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guardian_rtc_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guardian_rtc_msgs/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace guardian_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: is_healthy
  {
    out << "is_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_healthy, out);
    out << ", ";
  }

  // member: health_message
  {
    out << "health_message: ";
    rosidl_generator_traits::value_to_yaml(msg.health_message, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: memory_usage
  {
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: active_nodes
  {
    if (msg.active_nodes.size() == 0) {
      out << "active_nodes: []";
    } else {
      out << "active_nodes: [";
      size_t pending_items = msg.active_nodes.size();
      for (auto item : msg.active_nodes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: warnings
  {
    if (msg.warnings.size() == 0) {
      out << "warnings: []";
    } else {
      out << "warnings: [";
      size_t pending_items = msg.warnings.size();
      for (auto item : msg.warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: errors
  {
    if (msg.errors.size() == 0) {
      out << "errors: []";
    } else {
      out << "errors: [";
      size_t pending_items = msg.errors.size();
      for (auto item : msg.errors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemStatus & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: is_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_healthy, out);
    out << "\n";
  }

  // member: health_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_message: ";
    rosidl_generator_traits::value_to_yaml(msg.health_message, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: memory_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: active_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_nodes.size() == 0) {
      out << "active_nodes: []\n";
    } else {
      out << "active_nodes:\n";
      for (auto item : msg.active_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warnings.size() == 0) {
      out << "warnings: []\n";
    } else {
      out << "warnings:\n";
      for (auto item : msg.warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errors.size() == 0) {
      out << "errors: []\n";
    } else {
      out << "errors:\n";
      for (auto item : msg.errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const guardian_rtc_msgs::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  guardian_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guardian_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const guardian_rtc_msgs::msg::SystemStatus & msg)
{
  return guardian_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guardian_rtc_msgs::msg::SystemStatus>()
{
  return "guardian_rtc_msgs::msg::SystemStatus";
}

template<>
inline const char * name<guardian_rtc_msgs::msg::SystemStatus>()
{
  return "guardian_rtc_msgs/msg/SystemStatus";
}

template<>
struct has_fixed_size<guardian_rtc_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guardian_rtc_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guardian_rtc_msgs::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guardian_rtc_msgs/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace guardian_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: safety_state
  {
    out << "safety_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_state, out);
    out << ", ";
  }

  // member: is_safe_to_operate
  {
    out << "is_safe_to_operate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe_to_operate, out);
    out << ", ";
  }

  // member: is_emergency_stop_active
  {
    out << "is_emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_emergency_stop_active, out);
    out << ", ";
  }

  // member: is_safety_system_healthy
  {
    out << "is_safety_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety_system_healthy, out);
    out << ", ";
  }

  // member: sensor_readings
  {
    if (msg.sensor_readings.size() == 0) {
      out << "sensor_readings: []";
    } else {
      out << "sensor_readings: [";
      size_t pending_items = msg.sensor_readings.size();
      for (auto item : msg.sensor_readings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_thresholds
  {
    if (msg.safety_thresholds.size() == 0) {
      out << "safety_thresholds: []";
    } else {
      out << "safety_thresholds: [";
      size_t pending_items = msg.safety_thresholds.size();
      for (auto item : msg.safety_thresholds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_checks_passed
  {
    if (msg.safety_checks_passed.size() == 0) {
      out << "safety_checks_passed: []";
    } else {
      out << "safety_checks_passed: [";
      size_t pending_items = msg.safety_checks_passed.size();
      for (auto item : msg.safety_checks_passed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_warnings
  {
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []";
    } else {
      out << "active_warnings: [";
      size_t pending_items = msg.active_warnings.size();
      for (auto item : msg.active_warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_errors
  {
    if (msg.active_errors.size() == 0) {
      out << "active_errors: []";
    } else {
      out << "active_errors: [";
      size_t pending_items = msg.active_errors.size();
      for (auto item : msg.active_errors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_events
  {
    if (msg.safety_events.size() == 0) {
      out << "safety_events: []";
    } else {
      out << "safety_events: [";
      size_t pending_items = msg.safety_events.size();
      for (auto item : msg.safety_events) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_message
  {
    out << "safety_message: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_message, out);
    out << ", ";
  }

  // member: safety_checks_failed_count
  {
    out << "safety_checks_failed_count: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_checks_failed_count, out);
    out << ", ";
  }

  // member: last_safety_check_timestamp
  {
    out << "last_safety_check_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_safety_check_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyStatus & msg,
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

  // member: safety_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_state, out);
    out << "\n";
  }

  // member: is_safe_to_operate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safe_to_operate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe_to_operate, out);
    out << "\n";
  }

  // member: is_emergency_stop_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_emergency_stop_active, out);
    out << "\n";
  }

  // member: is_safety_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safety_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety_system_healthy, out);
    out << "\n";
  }

  // member: sensor_readings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_readings.size() == 0) {
      out << "sensor_readings: []\n";
    } else {
      out << "sensor_readings:\n";
      for (auto item : msg.sensor_readings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_thresholds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety_thresholds.size() == 0) {
      out << "safety_thresholds: []\n";
    } else {
      out << "safety_thresholds:\n";
      for (auto item : msg.safety_thresholds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_checks_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety_checks_passed.size() == 0) {
      out << "safety_checks_passed: []\n";
    } else {
      out << "safety_checks_passed:\n";
      for (auto item : msg.safety_checks_passed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []\n";
    } else {
      out << "active_warnings:\n";
      for (auto item : msg.active_warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_errors.size() == 0) {
      out << "active_errors: []\n";
    } else {
      out << "active_errors:\n";
      for (auto item : msg.active_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety_events.size() == 0) {
      out << "safety_events: []\n";
    } else {
      out << "safety_events:\n";
      for (auto item : msg.safety_events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_message: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_message, out);
    out << "\n";
  }

  // member: safety_checks_failed_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_checks_failed_count: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_checks_failed_count, out);
    out << "\n";
  }

  // member: last_safety_check_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_safety_check_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_safety_check_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyStatus & msg, bool use_flow_style = false)
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
  const guardian_rtc_msgs::msg::SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  guardian_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guardian_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const guardian_rtc_msgs::msg::SafetyStatus & msg)
{
  return guardian_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guardian_rtc_msgs::msg::SafetyStatus>()
{
  return "guardian_rtc_msgs::msg::SafetyStatus";
}

template<>
inline const char * name<guardian_rtc_msgs::msg::SafetyStatus>()
{
  return "guardian_rtc_msgs/msg/SafetyStatus";
}

template<>
struct has_fixed_size<guardian_rtc_msgs::msg::SafetyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guardian_rtc_msgs::msg::SafetyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guardian_rtc_msgs::msg::SafetyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_

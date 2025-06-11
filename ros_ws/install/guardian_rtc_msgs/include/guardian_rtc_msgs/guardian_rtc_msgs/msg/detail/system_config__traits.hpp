// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#ifndef GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__TRAITS_HPP_
#define GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guardian_rtc_msgs/msg/detail/system_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace guardian_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: config_version
  {
    out << "config_version: ";
    rosidl_generator_traits::value_to_yaml(msg.config_version, out);
    out << ", ";
  }

  // member: config_name
  {
    out << "config_name: ";
    rosidl_generator_traits::value_to_yaml(msg.config_name, out);
    out << ", ";
  }

  // member: is_default_config
  {
    out << "is_default_config: ";
    rosidl_generator_traits::value_to_yaml(msg.is_default_config, out);
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

  // member: warning_thresholds
  {
    if (msg.warning_thresholds.size() == 0) {
      out << "warning_thresholds: []";
    } else {
      out << "warning_thresholds: [";
      size_t pending_items = msg.warning_thresholds.size();
      for (auto item : msg.warning_thresholds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: critical_thresholds
  {
    if (msg.critical_thresholds.size() == 0) {
      out << "critical_thresholds: []";
    } else {
      out << "critical_thresholds: [";
      size_t pending_items = msg.critical_thresholds.size();
      for (auto item : msg.critical_thresholds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_rules
  {
    if (msg.safety_rules.size() == 0) {
      out << "safety_rules: []";
    } else {
      out << "safety_rules: [";
      size_t pending_items = msg.safety_rules.size();
      for (auto item : msg.safety_rules) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: system_parameters
  {
    if (msg.system_parameters.size() == 0) {
      out << "system_parameters: []";
    } else {
      out << "system_parameters: [";
      size_t pending_items = msg.system_parameters.size();
      for (auto item : msg.system_parameters) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enabled_features
  {
    if (msg.enabled_features.size() == 0) {
      out << "enabled_features: []";
    } else {
      out << "enabled_features: [";
      size_t pending_items = msg.enabled_features.size();
      for (auto item : msg.enabled_features) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: disabled_features
  {
    if (msg.disabled_features.size() == 0) {
      out << "disabled_features: []";
    } else {
      out << "disabled_features: [";
      size_t pending_items = msg.disabled_features.size();
      for (auto item : msg.disabled_features) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_interfaces
  {
    if (msg.network_interfaces.size() == 0) {
      out << "network_interfaces: []";
    } else {
      out << "network_interfaces: [";
      size_t pending_items = msg.network_interfaces.size();
      for (auto item : msg.network_interfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_ports
  {
    if (msg.network_ports.size() == 0) {
      out << "network_ports: []";
    } else {
      out << "network_ports: [";
      size_t pending_items = msg.network_ports.size();
      for (auto item : msg.network_ports) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_protocols
  {
    if (msg.network_protocols.size() == 0) {
      out << "network_protocols: []";
    } else {
      out << "network_protocols: [";
      size_t pending_items = msg.network_protocols.size();
      for (auto item : msg.network_protocols) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: log_level
  {
    out << "log_level: ";
    rosidl_generator_traits::value_to_yaml(msg.log_level, out);
    out << ", ";
  }

  // member: log_categories
  {
    if (msg.log_categories.size() == 0) {
      out << "log_categories: []";
    } else {
      out << "log_categories: [";
      size_t pending_items = msg.log_categories.size();
      for (auto item : msg.log_categories) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enable_debug_logging
  {
    out << "enable_debug_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_debug_logging, out);
    out << ", ";
  }

  // member: enable_performance_logging
  {
    out << "enable_performance_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_performance_logging, out);
    out << ", ";
  }

  // member: custom_parameters
  {
    if (msg.custom_parameters.size() == 0) {
      out << "custom_parameters: []";
    } else {
      out << "custom_parameters: [";
      size_t pending_items = msg.custom_parameters.size();
      for (auto item : msg.custom_parameters) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: config_description
  {
    out << "config_description: ";
    rosidl_generator_traits::value_to_yaml(msg.config_description, out);
    out << ", ";
  }

  // member: requires_restart
  {
    out << "requires_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_restart, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemConfig & msg,
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

  // member: config_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_version: ";
    rosidl_generator_traits::value_to_yaml(msg.config_version, out);
    out << "\n";
  }

  // member: config_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_name: ";
    rosidl_generator_traits::value_to_yaml(msg.config_name, out);
    out << "\n";
  }

  // member: is_default_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_default_config: ";
    rosidl_generator_traits::value_to_yaml(msg.is_default_config, out);
    out << "\n";
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

  // member: warning_thresholds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warning_thresholds.size() == 0) {
      out << "warning_thresholds: []\n";
    } else {
      out << "warning_thresholds:\n";
      for (auto item : msg.warning_thresholds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: critical_thresholds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.critical_thresholds.size() == 0) {
      out << "critical_thresholds: []\n";
    } else {
      out << "critical_thresholds:\n";
      for (auto item : msg.critical_thresholds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_rules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety_rules.size() == 0) {
      out << "safety_rules: []\n";
    } else {
      out << "safety_rules:\n";
      for (auto item : msg.safety_rules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: system_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.system_parameters.size() == 0) {
      out << "system_parameters: []\n";
    } else {
      out << "system_parameters:\n";
      for (auto item : msg.system_parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enabled_features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled_features.size() == 0) {
      out << "enabled_features: []\n";
    } else {
      out << "enabled_features:\n";
      for (auto item : msg.enabled_features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disabled_features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disabled_features.size() == 0) {
      out << "disabled_features: []\n";
    } else {
      out << "disabled_features:\n";
      for (auto item : msg.disabled_features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: network_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_interfaces.size() == 0) {
      out << "network_interfaces: []\n";
    } else {
      out << "network_interfaces:\n";
      for (auto item : msg.network_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: network_ports
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_ports.size() == 0) {
      out << "network_ports: []\n";
    } else {
      out << "network_ports:\n";
      for (auto item : msg.network_ports) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: network_protocols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_protocols.size() == 0) {
      out << "network_protocols: []\n";
    } else {
      out << "network_protocols:\n";
      for (auto item : msg.network_protocols) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: log_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_level: ";
    rosidl_generator_traits::value_to_yaml(msg.log_level, out);
    out << "\n";
  }

  // member: log_categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.log_categories.size() == 0) {
      out << "log_categories: []\n";
    } else {
      out << "log_categories:\n";
      for (auto item : msg.log_categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enable_debug_logging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_debug_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_debug_logging, out);
    out << "\n";
  }

  // member: enable_performance_logging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_performance_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_performance_logging, out);
    out << "\n";
  }

  // member: custom_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.custom_parameters.size() == 0) {
      out << "custom_parameters: []\n";
    } else {
      out << "custom_parameters:\n";
      for (auto item : msg.custom_parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: config_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_description: ";
    rosidl_generator_traits::value_to_yaml(msg.config_description, out);
    out << "\n";
  }

  // member: requires_restart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requires_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_restart, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemConfig & msg, bool use_flow_style = false)
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
  const guardian_rtc_msgs::msg::SystemConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  guardian_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guardian_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const guardian_rtc_msgs::msg::SystemConfig & msg)
{
  return guardian_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guardian_rtc_msgs::msg::SystemConfig>()
{
  return "guardian_rtc_msgs::msg::SystemConfig";
}

template<>
inline const char * name<guardian_rtc_msgs::msg::SystemConfig>()
{
  return "guardian_rtc_msgs/msg/SystemConfig";
}

template<>
struct has_fixed_size<guardian_rtc_msgs::msg::SystemConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guardian_rtc_msgs::msg::SystemConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guardian_rtc_msgs::msg::SystemConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUARDIAN_RTC_MSGS__MSG__DETAIL__SYSTEM_CONFIG__TRAITS_HPP_

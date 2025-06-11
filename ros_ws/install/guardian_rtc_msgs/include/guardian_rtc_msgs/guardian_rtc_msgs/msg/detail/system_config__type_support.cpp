// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from guardian_rtc_msgs:msg/SystemConfig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "guardian_rtc_msgs/msg/detail/system_config__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace guardian_rtc_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemConfig_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) guardian_rtc_msgs::msg::SystemConfig(_init);
}

void SystemConfig_fini_function(void * message_memory)
{
  auto typed_message = static_cast<guardian_rtc_msgs::msg::SystemConfig *>(message_memory);
  typed_message->~SystemConfig();
}

size_t size_function__SystemConfig__safety_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__safety_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__safety_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__safety_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SystemConfig__safety_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__safety_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SystemConfig__safety_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__safety_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__warning_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__warning_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__warning_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__warning_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SystemConfig__warning_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__warning_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SystemConfig__warning_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__warning_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__critical_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__critical_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__critical_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__critical_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SystemConfig__critical_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__critical_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SystemConfig__critical_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__critical_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__safety_rules(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__safety_rules(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__safety_rules(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__safety_rules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__safety_rules(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__safety_rules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__safety_rules(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__safety_rules(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__system_parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__system_parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__system_parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__system_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SystemConfig__system_parameters(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__system_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SystemConfig__system_parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__system_parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__enabled_features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__enabled_features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__enabled_features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__enabled_features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__enabled_features(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__enabled_features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__enabled_features(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__enabled_features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__disabled_features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__disabled_features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__disabled_features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__disabled_features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__disabled_features(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__disabled_features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__disabled_features(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__disabled_features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__network_interfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__network_interfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__network_interfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__network_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__network_interfaces(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__network_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__network_interfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__network_interfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__network_ports(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__network_ports(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__network_ports(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__network_ports(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SystemConfig__network_ports(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__network_ports(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SystemConfig__network_ports(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__network_ports(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__network_protocols(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__network_protocols(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__network_protocols(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__network_protocols(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__network_protocols(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__network_protocols(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__network_protocols(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__network_protocols(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__log_categories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__log_categories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__log_categories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__log_categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__log_categories(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__log_categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__log_categories(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__log_categories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemConfig__custom_parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemConfig__custom_parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemConfig__custom_parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemConfig__custom_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SystemConfig__custom_parameters(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SystemConfig__custom_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SystemConfig__custom_parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SystemConfig__custom_parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemConfig_message_member_array[21] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "config_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, config_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "config_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, config_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_default_config",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, is_default_config),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "safety_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, safety_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__safety_thresholds,  // size() function pointer
    get_const_function__SystemConfig__safety_thresholds,  // get_const(index) function pointer
    get_function__SystemConfig__safety_thresholds,  // get(index) function pointer
    fetch_function__SystemConfig__safety_thresholds,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__safety_thresholds,  // assign(index, value) function pointer
    resize_function__SystemConfig__safety_thresholds  // resize(index) function pointer
  },
  {
    "warning_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, warning_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__warning_thresholds,  // size() function pointer
    get_const_function__SystemConfig__warning_thresholds,  // get_const(index) function pointer
    get_function__SystemConfig__warning_thresholds,  // get(index) function pointer
    fetch_function__SystemConfig__warning_thresholds,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__warning_thresholds,  // assign(index, value) function pointer
    resize_function__SystemConfig__warning_thresholds  // resize(index) function pointer
  },
  {
    "critical_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, critical_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__critical_thresholds,  // size() function pointer
    get_const_function__SystemConfig__critical_thresholds,  // get_const(index) function pointer
    get_function__SystemConfig__critical_thresholds,  // get(index) function pointer
    fetch_function__SystemConfig__critical_thresholds,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__critical_thresholds,  // assign(index, value) function pointer
    resize_function__SystemConfig__critical_thresholds  // resize(index) function pointer
  },
  {
    "safety_rules",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, safety_rules),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__safety_rules,  // size() function pointer
    get_const_function__SystemConfig__safety_rules,  // get_const(index) function pointer
    get_function__SystemConfig__safety_rules,  // get(index) function pointer
    fetch_function__SystemConfig__safety_rules,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__safety_rules,  // assign(index, value) function pointer
    resize_function__SystemConfig__safety_rules  // resize(index) function pointer
  },
  {
    "system_parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, system_parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__system_parameters,  // size() function pointer
    get_const_function__SystemConfig__system_parameters,  // get_const(index) function pointer
    get_function__SystemConfig__system_parameters,  // get(index) function pointer
    fetch_function__SystemConfig__system_parameters,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__system_parameters,  // assign(index, value) function pointer
    resize_function__SystemConfig__system_parameters  // resize(index) function pointer
  },
  {
    "enabled_features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, enabled_features),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__enabled_features,  // size() function pointer
    get_const_function__SystemConfig__enabled_features,  // get_const(index) function pointer
    get_function__SystemConfig__enabled_features,  // get(index) function pointer
    fetch_function__SystemConfig__enabled_features,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__enabled_features,  // assign(index, value) function pointer
    resize_function__SystemConfig__enabled_features  // resize(index) function pointer
  },
  {
    "disabled_features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, disabled_features),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__disabled_features,  // size() function pointer
    get_const_function__SystemConfig__disabled_features,  // get_const(index) function pointer
    get_function__SystemConfig__disabled_features,  // get(index) function pointer
    fetch_function__SystemConfig__disabled_features,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__disabled_features,  // assign(index, value) function pointer
    resize_function__SystemConfig__disabled_features  // resize(index) function pointer
  },
  {
    "network_interfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, network_interfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__network_interfaces,  // size() function pointer
    get_const_function__SystemConfig__network_interfaces,  // get_const(index) function pointer
    get_function__SystemConfig__network_interfaces,  // get(index) function pointer
    fetch_function__SystemConfig__network_interfaces,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__network_interfaces,  // assign(index, value) function pointer
    resize_function__SystemConfig__network_interfaces  // resize(index) function pointer
  },
  {
    "network_ports",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, network_ports),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__network_ports,  // size() function pointer
    get_const_function__SystemConfig__network_ports,  // get_const(index) function pointer
    get_function__SystemConfig__network_ports,  // get(index) function pointer
    fetch_function__SystemConfig__network_ports,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__network_ports,  // assign(index, value) function pointer
    resize_function__SystemConfig__network_ports  // resize(index) function pointer
  },
  {
    "network_protocols",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, network_protocols),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__network_protocols,  // size() function pointer
    get_const_function__SystemConfig__network_protocols,  // get_const(index) function pointer
    get_function__SystemConfig__network_protocols,  // get(index) function pointer
    fetch_function__SystemConfig__network_protocols,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__network_protocols,  // assign(index, value) function pointer
    resize_function__SystemConfig__network_protocols  // resize(index) function pointer
  },
  {
    "log_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, log_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "log_categories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, log_categories),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__log_categories,  // size() function pointer
    get_const_function__SystemConfig__log_categories,  // get_const(index) function pointer
    get_function__SystemConfig__log_categories,  // get(index) function pointer
    fetch_function__SystemConfig__log_categories,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__log_categories,  // assign(index, value) function pointer
    resize_function__SystemConfig__log_categories  // resize(index) function pointer
  },
  {
    "enable_debug_logging",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, enable_debug_logging),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enable_performance_logging",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, enable_performance_logging),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "custom_parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, custom_parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemConfig__custom_parameters,  // size() function pointer
    get_const_function__SystemConfig__custom_parameters,  // get_const(index) function pointer
    get_function__SystemConfig__custom_parameters,  // get(index) function pointer
    fetch_function__SystemConfig__custom_parameters,  // fetch(index, &value) function pointer
    assign_function__SystemConfig__custom_parameters,  // assign(index, value) function pointer
    resize_function__SystemConfig__custom_parameters  // resize(index) function pointer
  },
  {
    "config_description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, config_description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requires_restart",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SystemConfig, requires_restart),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemConfig_message_members = {
  "guardian_rtc_msgs::msg",  // message namespace
  "SystemConfig",  // message name
  21,  // number of fields
  sizeof(guardian_rtc_msgs::msg::SystemConfig),
  SystemConfig_message_member_array,  // message members
  SystemConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemConfig_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemConfig_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemConfig_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace guardian_rtc_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<guardian_rtc_msgs::msg::SystemConfig>()
{
  return &::guardian_rtc_msgs::msg::rosidl_typesupport_introspection_cpp::SystemConfig_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, guardian_rtc_msgs, msg, SystemConfig)() {
  return &::guardian_rtc_msgs::msg::rosidl_typesupport_introspection_cpp::SystemConfig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

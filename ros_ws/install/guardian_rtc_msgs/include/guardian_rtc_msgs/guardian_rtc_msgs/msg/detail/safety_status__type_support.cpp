// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from guardian_rtc_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "guardian_rtc_msgs/msg/detail/safety_status__struct.hpp"
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

void SafetyStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) guardian_rtc_msgs::msg::SafetyStatus(_init);
}

void SafetyStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<guardian_rtc_msgs::msg::SafetyStatus *>(message_memory);
  typed_message->~SafetyStatus();
}

size_t size_function__SafetyStatus__sensor_readings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyStatus__sensor_readings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyStatus__sensor_readings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyStatus__sensor_readings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SafetyStatus__sensor_readings(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SafetyStatus__sensor_readings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SafetyStatus__sensor_readings(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SafetyStatus__sensor_readings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyStatus__safety_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyStatus__safety_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyStatus__safety_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyStatus__safety_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SafetyStatus__safety_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SafetyStatus__safety_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SafetyStatus__safety_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SafetyStatus__safety_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyStatus__safety_checks_passed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SafetyStatus__safety_checks_passed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SafetyStatus__safety_checks_passed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SafetyStatus__safety_checks_passed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyStatus__active_warnings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyStatus__active_warnings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyStatus__active_warnings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyStatus__active_warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SafetyStatus__active_warnings(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SafetyStatus__active_warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SafetyStatus__active_warnings(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SafetyStatus__active_warnings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyStatus__active_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyStatus__active_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyStatus__active_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyStatus__active_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SafetyStatus__active_errors(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SafetyStatus__active_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SafetyStatus__active_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SafetyStatus__active_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyStatus__safety_events(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyStatus__safety_events(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyStatus__safety_events(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyStatus__safety_events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SafetyStatus__safety_events(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SafetyStatus__safety_events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SafetyStatus__safety_events(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SafetyStatus__safety_events(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SafetyStatus_message_member_array[14] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "safety_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_safe_to_operate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, is_safe_to_operate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_emergency_stop_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, is_emergency_stop_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_safety_system_healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, is_safety_system_healthy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_readings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, sensor_readings),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__sensor_readings,  // size() function pointer
    get_const_function__SafetyStatus__sensor_readings,  // get_const(index) function pointer
    get_function__SafetyStatus__sensor_readings,  // get(index) function pointer
    fetch_function__SafetyStatus__sensor_readings,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__sensor_readings,  // assign(index, value) function pointer
    resize_function__SafetyStatus__sensor_readings  // resize(index) function pointer
  },
  {
    "safety_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__safety_thresholds,  // size() function pointer
    get_const_function__SafetyStatus__safety_thresholds,  // get_const(index) function pointer
    get_function__SafetyStatus__safety_thresholds,  // get(index) function pointer
    fetch_function__SafetyStatus__safety_thresholds,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__safety_thresholds,  // assign(index, value) function pointer
    resize_function__SafetyStatus__safety_thresholds  // resize(index) function pointer
  },
  {
    "safety_checks_passed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_checks_passed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__safety_checks_passed,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SafetyStatus__safety_checks_passed,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__safety_checks_passed,  // assign(index, value) function pointer
    resize_function__SafetyStatus__safety_checks_passed  // resize(index) function pointer
  },
  {
    "active_warnings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, active_warnings),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__active_warnings,  // size() function pointer
    get_const_function__SafetyStatus__active_warnings,  // get_const(index) function pointer
    get_function__SafetyStatus__active_warnings,  // get(index) function pointer
    fetch_function__SafetyStatus__active_warnings,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__active_warnings,  // assign(index, value) function pointer
    resize_function__SafetyStatus__active_warnings  // resize(index) function pointer
  },
  {
    "active_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, active_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__active_errors,  // size() function pointer
    get_const_function__SafetyStatus__active_errors,  // get_const(index) function pointer
    get_function__SafetyStatus__active_errors,  // get(index) function pointer
    fetch_function__SafetyStatus__active_errors,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__active_errors,  // assign(index, value) function pointer
    resize_function__SafetyStatus__active_errors  // resize(index) function pointer
  },
  {
    "safety_events",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_events),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyStatus__safety_events,  // size() function pointer
    get_const_function__SafetyStatus__safety_events,  // get_const(index) function pointer
    get_function__SafetyStatus__safety_events,  // get(index) function pointer
    fetch_function__SafetyStatus__safety_events,  // fetch(index, &value) function pointer
    assign_function__SafetyStatus__safety_events,  // assign(index, value) function pointer
    resize_function__SafetyStatus__safety_events  // resize(index) function pointer
  },
  {
    "safety_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "safety_checks_failed_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, safety_checks_failed_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_safety_check_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guardian_rtc_msgs::msg::SafetyStatus, last_safety_check_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SafetyStatus_message_members = {
  "guardian_rtc_msgs::msg",  // message namespace
  "SafetyStatus",  // message name
  14,  // number of fields
  sizeof(guardian_rtc_msgs::msg::SafetyStatus),
  SafetyStatus_message_member_array,  // message members
  SafetyStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SafetyStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SafetyStatus_message_members,
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
get_message_type_support_handle<guardian_rtc_msgs::msg::SafetyStatus>()
{
  return &::guardian_rtc_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, guardian_rtc_msgs, msg, SafetyStatus)() {
  return &::guardian_rtc_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

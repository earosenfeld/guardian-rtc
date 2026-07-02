cmake_minimum_required(VERSION 3.8)
project(guardian_rtc_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/StopEvent.msg"
  "msg/ControlCommand.msg"
  "msg/SafetyStatus.msg"
  "msg/SystemConfig.msg"
  "msg/SystemStatus.msg"
  DEPENDENCIES builtin_interfaces std_msgs geometry_msgs
)

add_executable(test_stop_event test/test_stop_event.cpp)
ament_target_dependencies(test_stop_event
  rclcpp
  std_msgs
)
rosidl_target_interfaces(test_stop_event
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS test_stop_event
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

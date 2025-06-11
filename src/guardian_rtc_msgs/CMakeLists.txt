cmake_minimum_required(VERSION 3.8)
project(guardian_rtc_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)

# Declare message files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/StopEvent.msg"
  DEPENDENCIES std_msgs
)

# Build test node
add_executable(test_stop_event test/test_stop_event.cpp)
ament_target_dependencies(test_stop_event
  rclcpp
  std_msgs
)
rosidl_target_interfaces(test_stop_event
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

# Install test node
install(TARGETS test_stop_event
  DESTINATION lib/${PROJECT_NAME}
)

# Install headers
install(DIRECTORY include/
  DESTINATION include
)

# Install message files
install(DIRECTORY msg/
  DESTINATION share/${PROJECT_NAME}/msg
)

ament_package() 
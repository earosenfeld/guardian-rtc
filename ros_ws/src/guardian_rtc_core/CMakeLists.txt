cmake_minimum_required(VERSION 3.8)
project(guardian_rtc_core)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(control_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/StopEvent.msg"
)
ament_export_dependencies(rosidl_default_runtime)

ament_python_install_package(
  guardian_rtc
)

ament_package() 
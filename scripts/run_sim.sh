#!/bin/bash
set -e

# Source ROS 2 environment
source /opt/ros/humble/setup.bash

# Source workspace if it exists
if [ -f "ros_ws/install/setup.bash" ]; then
    source ros_ws/install/setup.bash
fi

# Launch the simulation
ros2 launch guardian_rtc_core sim_demo.launch.py 
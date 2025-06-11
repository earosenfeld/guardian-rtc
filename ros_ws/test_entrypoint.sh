#!/bin/bash
set -e

# Source the ROS 2 setup file
source /opt/ros/humble/setup.bash

# Source the workspace setup file to ensure guardian_rtc_core is installed
source /ros_ws/install/setup.bash

# Set PYTHONPATH to include the installed packages and generated message modules
export PYTHONPATH=/ros_ws/install/guardian_rtc_core/lib/python3.10/site-packages:/ros_ws/install/lib/python3.10/site-packages:$PYTHONPATH

# Run the tests
cd /ros_ws/src/guardian_rtc_core
python3 -m pytest test 
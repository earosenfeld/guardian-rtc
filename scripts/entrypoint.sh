#!/bin/bash
set -e

# Source ROS 2 environment
source /opt/ros/humble/setup.bash

# If we have a workspace, source it
if [ -f /workspace/ros_ws/install/setup.bash ]; then
    source /workspace/ros_ws/install/setup.bash
fi

# Execute the command
exec "$@" 
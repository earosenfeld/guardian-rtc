#!/bin/bash
set -e

# setup ros environment
source "/opt/ros/humble/setup.bash"
source "/ros_ws/install/setup.bash"

exec "$@" 
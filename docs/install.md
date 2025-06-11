# Installation Guide

This guide covers different installation methods for GuardianRTC.

## Prerequisites

- Ubuntu 22.04 or later
- Python 3.10 or later
- ROS 2 Humble

## Binary Installation

```bash
# Install ROS 2 Humble
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update
sudo apt install ros-humble-desktop

# Install GuardianRTC
pip install guardianrtc
```

## Source Installation

```bash
# Clone repository
git clone https://github.com/yourusername/guardianrtc.git
cd guardianrtc

# Create virtual environment
python3 -m venv venv
source venv/bin/activate

# Install in development mode
pip install -e ".[dev]"

# Build ROS workspace
cd ros_ws
colcon build
```

## Docker Installation

```bash
# Build Docker image
./scripts/build_docker.sh

# Run development container
docker run -it --rm \
    -v $(pwd):/workspace \
    guardianrtc:dev
```

## Configuration

1. Copy the default configuration:
   ```bash
   cp ros_ws/src/guardian_rtc_core/resource/default_limits.yaml ~/.guardianrtc/config.yaml
   ```

2. Edit the configuration file to match your robot's parameters.

## Verification

Run the safety node to verify installation:
```bash
source ros_ws/install/setup.bash
ros2 launch guardian_rtc_core guardianrtc.launch.py
``` 
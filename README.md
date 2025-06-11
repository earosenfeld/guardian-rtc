# GuardianRTC

A real-time control system for robotic arms with WebRTC-based teleoperation and kinetic energy safety monitoring.

## Quick Start

1. Install ROS 2 Humble
2. Clone this repository
3. Build the workspace:
   ```bash
   cd ros_ws
   colcon build
   ```
4. Source the workspace:
   ```bash
   source install/setup.bash
   ```
5. Launch the system:
   ```bash
   ros2 launch guardian_rtc_core guardianrtc.launch.py
   ```

## Architecture

GuardianRTC provides:
- Real-time kinetic energy monitoring at 1kHz
- WebRTC-based teleoperation interface
- SQLite & JSONL event logging
- Configurable safety limits per robot model

## Development

- Python 3.10+
- ROS 2 Humble
- WebRTC (aiortc)
- Docker support for development and CI

## ROS 2 Docker Development

### Building and Running the Container

1. **Build and start the container:**
   ```bash
   docker-compose -f docker/docker-compose.yml up -d --build
   ```
   This will create and start a container named `docker-ros-1` by default.

2. **Access the running container:**
   ```bash
   docker-compose -f docker/docker-compose.yml exec ros bash
   ```

3. **Build the ROS 2 workspace inside the container:**
   ```bash
   cd /ros_ws
   source /opt/ros/humble/setup.bash
   colcon build
   ```

4. **Source the workspace and run the test node:**
   ```bash
   source install/setup.bash
   ros2 run guardian_rtc_msgs test_stop_event
   ```

5. **To stop and remove the container:**
   ```bash
   docker-compose -f docker/docker-compose.yml down
   ```

## License

Apache 2.0 - See [LICENSE](LICENSE) for details.
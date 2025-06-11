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

## License

Apache 2.0 - See [LICENSE](LICENSE) for details.
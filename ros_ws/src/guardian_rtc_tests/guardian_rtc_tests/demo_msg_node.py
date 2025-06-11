#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from guardian_rtc_msgs.msg import SystemStatus, SafetyStatus, ControlCommand
from builtin_interfaces.msg import Time
import time

class DemoMsgNode(Node):
    def __init__(self):
        super().__init__("demo_msg_node")

        # Publishers
        self.sys_pub = self.create_publisher(SystemStatus, "/guardian/system_status", 10)
        self.safe_pub = self.create_publisher(SafetyStatus, "/guardian/safety_status", 10)

        # Subscriber
        self.cmd_sub = self.create_subscription(
            ControlCommand,
            "/guardian/control_cmd",
            self.on_command,
            10,
        )

        # Timer to publish statuses
        self.create_timer(1.0, self.publish_status)
        self.get_logger().info("Demo message node started")

    def publish_status(self):
        # Create and publish SystemStatus
        sys_msg = SystemStatus()
        now = self.get_clock().now()
        sys_msg.timestamp = Time(sec=now.nanoseconds // 1_000_000_000,
                               nanosec=now.nanoseconds % 1_000_000_000)
        sys_msg.state = SystemStatus.STATE_OPERATIONAL
        sys_msg.is_healthy = True
        sys_msg.health_message = "System operating normally"
        sys_msg.battery_voltage = 12.5
        sys_msg.battery_percentage = 85.0
        sys_msg.is_charging = False
        sys_msg.cpu_usage = 23.5
        sys_msg.memory_usage = 45.2
        sys_msg.temperature = 42.0
        sys_msg.active_nodes = ["demo_msg_node", "safety_node"]
        self.sys_pub.publish(sys_msg)

        # Create and publish SafetyStatus
        safe_msg = SafetyStatus()
        safe_msg.timestamp = sys_msg.timestamp
        safe_msg.safety_state = SafetyStatus.SAFETY_NORMAL
        safe_msg.is_safe_to_operate = True
        safe_msg.is_emergency_stop_active = False
        safe_msg.is_safety_system_healthy = True
        safe_msg.sensor_readings = [1.0, 2.0, 3.0]
        safe_msg.safety_thresholds = [5.0, 5.0, 5.0]
        safe_msg.safety_checks_passed = [True, True, True]
        safe_msg.safety_message = "All safety checks passed"
        self.safe_pub.publish(safe_msg)

    def on_command(self, msg: ControlCommand):
        self.get_logger().info(f"Received command: type={msg.command_type}, "
                             f"id={msg.command_id}, "
                             f"sequence={msg.sequence_number}")

def main():
    rclpy.init()
    node = DemoMsgNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main() 
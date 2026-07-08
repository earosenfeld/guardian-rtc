#!/usr/bin/env python3
"""End-to-end tests for SafetyNode against a live rclpy context.

Run inside a sourced ROS 2 workspace (CI does this after colcon build):

    python3 -m pytest test/test_safety_node.py -q
"""

import tempfile
from pathlib import Path

import pytest
import rclpy
from sensor_msgs.msg import JointState

from guardian_rtc.logger import SafetyLogger
from guardian_rtc.safety_node import SafetyNode


@pytest.fixture(scope="module")
def node():
    rclpy.init()
    n = SafetyNode()
    # Keep test artifacts out of the user's home directory.
    tmp = tempfile.mkdtemp()
    n.logger = SafetyLogger(
        db_path=str(Path(tmp) / "test.db"),
        jsonl_path=str(Path(tmp) / "events.jsonl"),
    )
    yield n
    n.destroy_node()
    rclpy.shutdown()


def _joint_state(velocities):
    msg = JointState()
    msg.name = [f"joint_{i + 1}" for i in range(len(velocities))]
    msg.position = [0.0] * len(velocities)
    msg.velocity = list(velocities)
    return msg


def _spy(node):
    stops, events = [], []
    node.stop_pub.publish = stops.append
    node.event_pub.publish = events.append
    return stops, events


def test_node_loads_default_config(node):
    assert node.config.max_kinetic_energy > 0
    assert len(node.config.inertia_params) == 6


def test_low_ke_does_not_stop(node):
    stops, events = _spy(node)
    node.last_callback_time = 0.0
    node.joint_state_callback(_joint_state([0.1] * 6))
    assert stops == []
    assert events == []


def test_ke_over_limit_publishes_stop_event(node):
    stops, events = _spy(node)
    node.last_callback_time = 0.0
    # KE = 0.5 * sum(I_i * v_i^2); with unit inertias, v=100 rad/s on one
    # joint gives 5000 J >> the 100 J default limit.
    node.joint_state_callback(_joint_state([100.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
    assert len(stops) == 1
    assert len(events) == 1
    event = events[0]
    assert event.event_type == "KE_LIMIT"
    assert event.ke_j == pytest.approx(5000.0)
    assert list(event.joint_positions) == [0.0] * 6


def test_rate_limiter_drops_back_to_back_updates(node):
    stops, _ = _spy(node)
    node.last_callback_time = 0.0
    node.joint_state_callback(_joint_state([100.0] * 6))
    # Widen the window so the second call deterministically lands inside it
    # regardless of how slowly the first callback ran on this machine.
    node.min_callback_period = 60.0
    try:
        node.joint_state_callback(_joint_state([100.0] * 6))
    finally:
        node.min_callback_period = 0.001
    assert len(stops) == 1

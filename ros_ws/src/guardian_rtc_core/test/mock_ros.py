#!/usr/bin/env python3

class MockNode:
    def __init__(self, name):
        self.name = name
        self.publishers = {}
        self.subscribers = {}
        self.parameters = {}

    def create_publisher(self, msg_type, topic, qos_profile):
        self.publishers[topic] = MockPublisher(msg_type, topic)
        return self.publishers[topic]

    def create_subscription(self, msg_type, topic, callback, qos_profile):
        self.subscribers[topic] = MockSubscription(msg_type, topic, callback)
        return self.subscribers[topic]

    def get_clock(self):
        return MockClock()

    def get_logger(self):
        return MockLogger()

class MockPublisher:
    def __init__(self, msg_type, topic):
        self.msg_type = msg_type
        self.topic = topic
        self.messages = []

    def publish(self, msg):
        self.messages.append(msg)

class MockSubscription:
    def __init__(self, msg_type, topic, callback):
        self.msg_type = msg_type
        self.topic = topic
        self.callback = callback

    def trigger_callback(self, msg):
        self.callback(msg)

class MockClock:
    def now(self):
        return MockTime()

class MockTime:
    def to_msg(self):
        return {'sec': 0, 'nanosec': 0}

class MockLogger:
    def info(self, msg):
        print(f"INFO: {msg}")

    def error(self, msg):
        print(f"ERROR: {msg}")

    def warn(self, msg):
        print(f"WARN: {msg}")

    def debug(self, msg):
        print(f"DEBUG: {msg}")

# Mock message types
class MockJointState:
    def __init__(self):
        self.header = {'stamp': {'sec': 0, 'nanosec': 0}}
        self.name = []
        self.position = []
        self.velocity = []
        self.effort = []

class MockEmpty:
    pass

class MockTwist:
    def __init__(self):
        self.linear = MockVector3()
        self.angular = MockVector3()

class MockVector3:
    def __init__(self):
        self.x = 0.0
        self.y = 0.0
        self.z = 0.0

class MockStopEvent:
    def __init__(self):
        self.timestamp_ns = 0
        self.event_type = ""
        self.ke_j = 0.0
        self.joint_positions = []
        self.payload_id = "" 
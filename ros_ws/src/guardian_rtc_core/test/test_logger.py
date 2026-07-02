#!/usr/bin/env python3

import unittest
import os
import tempfile
import json
from mock_ros import MockNode
from guardian_rtc.logger import SafetyLogger
from guardian_rtc_msgs.msg import StopEvent

class TestSafetyLogger(unittest.TestCase):
    def setUp(self):
        # Create a temporary directory for test files
        self.test_dir = tempfile.mkdtemp()
        self.db_path = os.path.join(self.test_dir, 'test.db')
        self.jsonl_path = os.path.join(self.test_dir, 'test.jsonl')
        
        # Initialize the logger
        self.logger = SafetyLogger(
            db_path=self.db_path,
            jsonl_path=self.jsonl_path,
            cloud_sync=False
        )

    def tearDown(self):
        # Clean up test files
        if os.path.exists(self.db_path):
            os.remove(self.db_path)
        if os.path.exists(self.jsonl_path):
            os.remove(self.jsonl_path)
        os.rmdir(self.test_dir)

    def test_ke_measurement_logging(self):
        """Test that kinetic energy measurements are logged correctly"""
        # Log a test measurement
        timestamp = 1234567890
        ke_value = 10.5
        self.logger.log_ke_measurement(timestamp, ke_value)

        # Verify SQLite database
        cursor = self.logger.conn.cursor()
        cursor.execute("SELECT timestamp, ke_value FROM ke_measurements")
        result = cursor.fetchone()
        self.assertIsNotNone(result)
        self.assertEqual(result[0], timestamp)
        self.assertEqual(result[1], ke_value)

        # Verify JSONL file
        with open(self.jsonl_path, 'r') as f:
            line = f.readline()
            data = json.loads(line)
            self.assertEqual(data['timestamp'], timestamp)
            self.assertEqual(data['ke_value'], ke_value)

    def test_stop_event_logging(self):
        """Test that stop events are logged correctly"""
        # Log a test stop event
        timestamp = 1234567890
        event_type = "KE_LIMIT"
        ke_value = 15.0
        joint_positions = [0.1, 0.2, 0.3]
        payload_id = "test_payload"
        
        self.logger.log_stop_event(
            timestamp=timestamp,
            event_type=event_type,
            ke_value=ke_value,
            joint_positions=joint_positions,
            payload_id=payload_id
        )

        # Verify SQLite database
        cursor = self.logger.conn.cursor()
        cursor.execute("SELECT timestamp, event_type, ke_value, joint_positions, payload_id FROM events")
        result = cursor.fetchone()
        self.assertIsNotNone(result)
        self.assertEqual(result[0], timestamp)
        self.assertEqual(result[1], event_type)
        self.assertEqual(result[2], ke_value)
        self.assertEqual(json.loads(result[3]), joint_positions)
        self.assertEqual(result[4], payload_id)

        # Verify JSONL file
        with open(self.jsonl_path, 'r') as f:
            line = f.readline()
            data = json.loads(line)
            self.assertEqual(data['timestamp'], timestamp)
            self.assertEqual(data['event_type'], event_type)
            self.assertEqual(data['ke_value'], ke_value)
            self.assertEqual(data['joint_positions'], joint_positions)
            self.assertEqual(data['payload_id'], payload_id)

if __name__ == '__main__':
    unittest.main() 
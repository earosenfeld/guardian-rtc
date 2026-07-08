"""
Logging module for safety events and measurements.
"""

import json
import sqlite3
from datetime import datetime
from pathlib import Path
from typing import Optional, Dict, Any
import time

class SafetyLogger:
    """Logger for safety events and measurements."""
    
    def __init__(self, db_path: Optional[str] = None, cloud_sync: bool = False,
                 jsonl_path: Optional[str] = None):
        """
        Initialize the logger.
        
        Args:
            db_path: Path to SQLite database file. If None, uses default location.
            cloud_sync: Whether to enable cloud sync (stub for v0.2)
            jsonl_path: Path to the JSONL event log. If None, uses a timestamped
                file under ~/.guardianrtc/log/.
        """
        if db_path is None:
            db_path = str(Path.home() / '.guardianrtc' / 'guardianrtc.db')
            
        # Ensure directory exists
        Path(db_path).parent.mkdir(parents=True, exist_ok=True)
        
        # Initialize database
        self.conn = sqlite3.connect(db_path)
        self._create_tables()
        
        # Setup JSONL logging
        if jsonl_path is None:
            self.log_dir = Path.home() / '.guardianrtc' / 'log'
            self.jsonl_path = self.log_dir / f'events_{int(time.time())}.jsonl'
        else:
            self.jsonl_path = Path(jsonl_path)
            self.log_dir = self.jsonl_path.parent
        self.log_dir.mkdir(parents=True, exist_ok=True)
        
        # Cloud sync flag (stub for v0.2)
        self.cloud_sync = cloud_sync
        
    def _create_tables(self):
        """Create necessary database tables if they don't exist."""
        self.conn.execute("""
            CREATE TABLE IF NOT EXISTS events (
                timestamp_ns INTEGER,
                event_type TEXT,
                ke_j REAL,
                joint_positions TEXT,
                payload_id TEXT
            )
        """)
        self.conn.commit()
        
    def log_ke_measurement(self, ke: float, exceeded_limit: bool = False):
        """
        Log a kinetic energy measurement.
        
        Args:
            ke: Kinetic energy value in Joules
            exceeded_limit: Whether the safety limit was exceeded
        """
        timestamp = int(time.time_ns())
        
        # Log to SQLite
        self.conn.execute(
            "INSERT INTO events (timestamp_ns, event_type, ke_j) VALUES (?, ?, ?)",
            (timestamp, 'KE_MEASUREMENT', ke)
        )
        self.conn.commit()
        
        # Log to JSONL
        event = {
            'timestamp_ns': timestamp,
            'event_type': 'KE_MEASUREMENT',
            'ke_j': ke,
            'exceeded_limit': exceeded_limit
        }
        self._write_jsonl(event)
        
    def log_stop_event(self, event):
        """
        Log a stop event.
        Args:
            event: StopEvent message or dict
        """
        # Support both message and dict for testing
        if isinstance(event, dict):
            event_dict = event
            timestamp_ns = event.get('timestamp_ns', int(time.time_ns()))
            event_type = event.get('event_type', 'UNKNOWN')
            ke_j = event.get('ke_j', 0.0)
            joint_positions = event.get('joint_positions', [])
            payload_id = event.get('payload_id', '')
        else:
            event_dict = {
                'timestamp_ns': event.timestamp_ns,
                'event_type': event.event_type,
                'ke_j': event.ke_j,
                'joint_positions': event.joint_positions,
                'payload_id': event.payload_id
            }
            timestamp_ns = event.timestamp_ns
            event_type = event.event_type
            ke_j = event.ke_j
            joint_positions = event.joint_positions
            payload_id = event.payload_id
        # Log to SQLite
        self.conn.execute(
            """
            INSERT INTO events 
            (timestamp_ns, event_type, ke_j, joint_positions, payload_id)
            VALUES (?, ?, ?, ?, ?)
            """,
            (
                timestamp_ns,
                event_type,
                ke_j,
                json.dumps(joint_positions),
                payload_id
            )
        )
        self.conn.commit()
        # Log to JSONL
        self._write_jsonl(event_dict)
        
    def _write_jsonl(self, event: Dict[str, Any]):
        """Write an event to the JSONL file."""
        with open(self.jsonl_path, 'a') as f:
            f.write(json.dumps(event) + '\n')
            
    def close(self):
        """Close the database connection."""
        self.conn.close() 
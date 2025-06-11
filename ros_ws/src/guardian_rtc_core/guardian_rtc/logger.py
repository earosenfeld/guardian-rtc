"""
Logging module for safety events and measurements.
"""

import json
import sqlite3
from datetime import datetime
from pathlib import Path
from typing import Optional

class SafetyLogger:
    """Logger for safety events and measurements."""
    
    def __init__(self, db_path: Optional[str] = None):
        """
        Initialize the logger.
        
        Args:
            db_path: Path to SQLite database file. If None, uses default location.
        """
        if db_path is None:
            db_path = str(Path.home() / '.guardianrtc' / 'safety.db')
            
        # Ensure directory exists
        Path(db_path).parent.mkdir(parents=True, exist_ok=True)
        
        # Initialize database
        self.conn = sqlite3.connect(db_path)
        self._create_tables()
        
    def _create_tables(self):
        """Create necessary database tables if they don't exist."""
        self.conn.execute("""
            CREATE TABLE IF NOT EXISTS ke_measurements (
                timestamp TEXT,
                kinetic_energy REAL,
                exceeded_limit BOOLEAN
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
        timestamp = datetime.utcnow().isoformat()
        self.conn.execute(
            "INSERT INTO ke_measurements VALUES (?, ?, ?)",
            (timestamp, ke, exceeded_limit)
        )
        self.conn.commit()
        
    def close(self):
        """Close the database connection."""
        self.conn.close() 
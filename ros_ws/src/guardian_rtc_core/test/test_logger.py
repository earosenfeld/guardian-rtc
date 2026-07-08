#!/usr/bin/env python3
"""Tests for SafetyLogger's SQLite + JSONL persistence."""

import json
import tempfile
from pathlib import Path

import pytest

from guardian_rtc.logger import SafetyLogger


@pytest.fixture()
def logger(tmp_path):
    lg = SafetyLogger(
        db_path=str(tmp_path / "test.db"),
        jsonl_path=str(tmp_path / "events.jsonl"),
    )
    yield lg
    lg.conn.close()


def test_ke_measurement_logged_to_sqlite_and_jsonl(logger):
    logger.log_ke_measurement(10.5)

    row = logger.conn.execute(
        "SELECT event_type, ke_j FROM events"
    ).fetchone()
    assert row == ("KE_MEASUREMENT", 10.5)

    data = json.loads(Path(logger.jsonl_path).read_text().splitlines()[0])
    assert data["event_type"] == "KE_MEASUREMENT"
    assert data["ke_j"] == 10.5
    assert data["exceeded_limit"] is False


def test_stop_event_logged_with_all_fields(logger):
    event = {
        "timestamp_ns": 1234567890,
        "event_type": "KE_LIMIT",
        "ke_j": 15.0,
        "joint_positions": [0.1, 0.2, 0.3],
        "payload_id": "test_payload",
    }
    logger.log_stop_event(event)

    row = logger.conn.execute(
        "SELECT timestamp_ns, event_type, ke_j, joint_positions, payload_id FROM events"
    ).fetchone()
    assert row[0] == 1234567890
    assert row[1] == "KE_LIMIT"
    assert row[2] == 15.0
    assert json.loads(row[3]) == [0.1, 0.2, 0.3]
    assert row[4] == "test_payload"

    data = json.loads(Path(logger.jsonl_path).read_text().splitlines()[0])
    assert data["event_type"] == "KE_LIMIT"
    assert data["joint_positions"] == [0.1, 0.2, 0.3]

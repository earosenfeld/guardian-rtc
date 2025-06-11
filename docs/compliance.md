# Compliance Guide

This guide explains how GuardianRTC helps meet ISO 10218 safety requirements for industrial robots.

## Safety Features

GuardianRTC implements several key safety features required by ISO 10218:

1. **Kinetic Energy Monitoring**
   - Real-time calculation at 1kHz
   - Configurable thresholds per joint
   - Automatic motion limiting

2. **Event Logging**
   - SQLite database for long-term storage
   - JSONL format for real-time monitoring
   - Timestamped events with energy levels

3. **Emergency Stop**
   - WebRTC-based remote monitoring
   - Automatic stop on threshold exceedance
   - Manual emergency stop capability

## Logging Requirements

ISO 10218 requires logging of:
- Safety system events
- Emergency stops
- Configuration changes
- Maintenance activities

GuardianRTC logs these in the SQLite database at `~/.guardianrtc/safety.db`.

## Audit Trail

To generate an audit report:

```bash
# Export safety events
sqlite3 ~/.guardianrtc/safety.db << EOF
.mode csv
.headers on
.output safety_audit.csv
SELECT * FROM ke_measurements WHERE exceeded_limit = 1;
EOF
```

## Configuration Management

Safety parameters are stored in YAML format:
- Maximum kinetic energy
- Joint limits
- Inertia parameters

Changes to these parameters are logged with:
- Timestamp
- Previous value
- New value
- User who made the change

## Maintenance

Regular maintenance tasks:
1. Review safety logs weekly
2. Verify sensor calibration monthly
3. Test emergency stop quarterly
4. Full system audit annually 
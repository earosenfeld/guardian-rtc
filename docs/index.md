# GuardianRTC Documentation

GuardianRTC is a real-time control system for robotic arms that provides:
- Kinetic energy monitoring and limiting
- WebRTC-based teleoperation
- Event logging and compliance tracking

## Overview

GuardianRTC helps ensure safe operation of robotic arms by:
1. Monitoring joint velocities and calculating kinetic energy
2. Limiting motion when energy thresholds are exceeded
3. Providing a web-based teleoperation interface
4. Logging all safety events for compliance

## Quick Start

See the [Installation Guide](install.md) for detailed setup instructions.

## Architecture

The system consists of several key components:
- Safety Node: Monitors kinetic energy at 1kHz
- Teleoperation Bridge: WebRTC interface for remote control
- Event Logger: SQLite and JSONL logging
- Configuration: YAML-based safety limits

## Compliance

GuardianRTC helps meet ISO 10218 safety requirements. See [Compliance Guide](compliance.md) for details.

## API Reference

See the [API Documentation](api.md) for detailed information about the system's interfaces. 
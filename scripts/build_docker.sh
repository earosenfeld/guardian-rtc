#!/bin/bash
set -e

# Build development image
docker build -t guardianrtc:dev -f docker/dev.Dockerfile .

# Build CI image
docker build -t guardianrtc:ci -f docker/ci.Dockerfile .

echo "Docker images built successfully!" 
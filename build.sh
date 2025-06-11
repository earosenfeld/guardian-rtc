#!/bin/bash

# Exit on error
set -e

# Create build directory
mkdir -p build
cd build

# Configure and build
cmake ..
make

# Run tests
ctest --output-on-failure

echo "Build completed successfully!" 
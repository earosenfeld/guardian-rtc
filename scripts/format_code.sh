#!/bin/bash
set -e

# Format Python code with ruff
ruff format .

# Type check with mypy
mypy .

echo "Code formatting and type checking completed!" 
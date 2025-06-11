FROM ros:humble

# Install minimal dependencies for CI
RUN apt-get update && apt-get install -y \
    python3-pip \
    python3-dev \
    && rm -rf /var/lib/apt/lists/*

# Install Python testing tools
RUN pip3 install --no-cache-dir \
    pytest \
    pytest-cov \
    ruff \
    mypy

# Set working directory
WORKDIR /workspace

# Copy entrypoint script
COPY scripts/entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
CMD ["bash"] 
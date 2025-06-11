# Contributing to GuardianRTC

Thank you for your interest in contributing to GuardianRTC! This document provides guidelines and instructions for contributing.

## Development Setup

1. Install ROS 2 Humble
2. Clone the repository
3. Set up the development environment:
   ```bash
   # Create and activate a virtual environment
   python3 -m venv venv
   source venv/bin/activate
   
   # Install development dependencies
   pip install -e ".[dev]"
   ```

## Code Style

- Follow PEP 8 style guide
- Use type hints for all function parameters and return values
- Keep line length under 100 characters
- Use docstrings for all modules, classes, and functions

## Testing

- Write unit tests for all new functionality
- Run tests before submitting a PR:
  ```bash
  pytest
  ```

## Pull Request Process

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Run tests and linting
5. Submit a pull request

## Commit Messages

Follow the [Conventional Commits](https://www.conventionalcommits.org/) specification:

```
<type>(<scope>): <description>

[optional body]

[optional footer]
```

Types:
- feat: New feature
- fix: Bug fix
- docs: Documentation changes
- style: Code style changes
- refactor: Code refactoring
- test: Adding or modifying tests
- chore: Maintenance tasks

## License

By contributing to GuardianRTC, you agree that your contributions will be licensed under the project's Apache 2.0 License. 
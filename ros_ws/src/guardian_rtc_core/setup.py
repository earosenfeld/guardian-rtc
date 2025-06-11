from setuptools import setup
import os
from glob import glob

package_name = 'guardian_rtc_core'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'resource'), glob('resource/*.yaml')),
        (os.path.join('share', package_name, 'resource', 'web_assets'), glob('resource/web_assets/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='GuardianRTC Contributors',
    maintainer_email='maintainer@example.com',
    description='Real-time control system for robotic arms with WebRTC-based teleoperation',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'safety_node = guardian_rtc_core.safety_node:main',
            'teleop_bridge = guardian_rtc_core.teleop_bridge:main',
        ],
    },
) 
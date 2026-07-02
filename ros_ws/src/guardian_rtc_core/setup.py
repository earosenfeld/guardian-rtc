from setuptools import setup, find_packages
import os
from glob import glob

package_name = 'guardian_rtc_core'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(),
    package_dir={'': '.'},
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
    maintainer='Eric Rosenfeld',
    maintainer_email='ericalanrosenfeld@gmail.com',
    description='ROS 2 safety monitor prototype: kinetic-energy stop events with WebRTC teleoperation',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'safety_node = guardian_rtc.safety_node:main',
            'teleop_bridge = guardian_rtc.teleop_bridge:main',
        ],
    },
) 
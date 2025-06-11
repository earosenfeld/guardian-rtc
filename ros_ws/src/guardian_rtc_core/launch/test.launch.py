#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    # Get package directory
    pkg_dir = FindPackageShare('guardian_rtc_core').find('guardian_rtc_core')
    
    # Include Gazebo launch file
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('gazebo_ros').find('gazebo_ros'),
                'launch',
                'gazebo.launch.py'
            ])
        ])
    )
    
    # Spawn robot model
    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'ur5',
            '-file', os.path.join(pkg_dir, 'resource', 'ur5.urdf')
        ],
        output='screen'
    )
    
    # Launch safety node
    safety_node = Node(
        package='guardian_rtc_core',
        executable='safety_node',
        name='safety_node',
        output='screen',
        parameters=[{
            'ke_limit': 100.0,  # Joules
            'update_rate': 1000.0  # Hz
        }]
    )
    
    # Launch teleoperation bridge
    teleop_bridge = Node(
        package='guardian_rtc_core',
        executable='teleop_bridge',
        name='teleop_bridge',
        output='screen',
        parameters=[{
            'port': 8080,
            'camera_topic': '/camera/image_raw'
        }]
    )
    
    # Launch logger
    logger = Node(
        package='guardian_rtc_core',
        executable='logger',
        name='logger',
        output='screen',
        parameters=[{
            'db_path': '~/.guardianrtc/safety.db',
            'jsonl_path': '~/.guardianrtc/events.jsonl',
            'cloud_sync': False
        }]
    )
    
    return LaunchDescription([
        gazebo_launch,
        spawn_robot,
        safety_node,
        teleop_bridge,
        logger
    ]) 
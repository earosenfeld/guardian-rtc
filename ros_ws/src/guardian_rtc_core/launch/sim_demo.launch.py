from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get package directories
    pkg_dir = get_package_share_directory('guardian_rtc_core')
    gazebo_pkg = get_package_share_directory('gazebo_ros')
    
    # Include Gazebo launch
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gazebo_pkg, 'launch', 'gazebo.launch.py')
        )
    )
    
    # Spawn robot model
    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-entity', 'ur5', '-file', os.path.join(pkg_dir, 'resource', 'ur5.urdf')],
        output='screen'
    )
    
    # Launch GuardianRTC nodes
    safety_node = Node(
        package='guardian_rtc_core',
        executable='safety_node',
        name='safety_node',
        output='screen'
    )
    
    teleop_bridge = Node(
        package='guardian_rtc_core',
        executable='teleop_bridge',
        name='teleop_bridge',
        output='screen'
    )
    
    return LaunchDescription([
        gazebo_launch,
        spawn_robot,
        safety_node,
        teleop_bridge
    ]) 
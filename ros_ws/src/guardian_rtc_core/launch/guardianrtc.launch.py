from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get package share directory
    pkg_dir = get_package_share_directory('guardian_rtc_core')
    
    # Declare launch arguments
    config_file = LaunchConfiguration('config_file')
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=os.path.join(pkg_dir, 'resource', 'default_limits.yaml'),
        description='Path to safety configuration file'
    )
    
    # Create nodes
    safety_node = Node(
        package='guardian_rtc_core',
        executable='safety_node',
        name='safety_node',
        parameters=[{'config_file': config_file}],
        output='screen'
    )
    
    teleop_bridge = Node(
        package='guardian_rtc_core',
        executable='teleop_bridge',
        name='teleop_bridge',
        output='screen'
    )
    
    return LaunchDescription([
        config_file_arg,
        safety_node,
        teleop_bridge
    ]) 
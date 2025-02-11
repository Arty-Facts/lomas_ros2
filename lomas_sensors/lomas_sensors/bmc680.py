#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32 

from gpiozero import MCP3002


# Class for handle soil moisture sensor
class SoilMoisture(Node):

    def __init__(self):
        super().__init__('soil_moisture_node')

        # Declare port parameter
        self.declare_parameter('channel', 1)

        # Init soil moisture sensor through MCP3002 A/D converter
        channel = self.get_parameter('channel').value
        self.sensor = MCP3002(channel = channel)
        
        # Setup ROS publisher
        self.publisher = self.create_publisher(Bool, '/soil/moisture', 10)
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.callback)

    # Read and publish sensor value
    def callback(self):
        try:
            msg = Float32()
            msg.data = self.sensor.value
            self.publisher_.publish(msg)
        except Exception as e:
            self.get_logger().error(f"Soil moisture sensor: {e}", throttle_duration_sec = 1)

                                                                                                                                    
# Main function
def main(args = None):
    rclpy.init(args = args)
    node = SoilMoisture()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
        
    # Destroy the node (explicitly)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


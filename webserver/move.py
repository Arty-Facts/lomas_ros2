import rclpy
from rclpy.node import Node
from lomas_interfaces.msg import MachineCommand
import time

class MachineMover(Node):
    def __init__(self):
        super().__init__('machine_mover')
        self.publisher_ = self.create_publisher(MachineCommand, '/lomas/machine/cmd', 3)
        self.hight = 30
        self.width = 30

    def move_once(self, x, y, z=0):
        msg = MachineCommand()
        msg.y = int(x * self.width)
        msg.x = int(y * self.hight)
        msg.z = z
        msg.stop = False
        self.publisher_.publish(msg)
        self.get_logger().info(f'Moving to: x={msg.x}, y={msg.y}, z={msg.z}')

    def go_home(self):
        msg = MachineCommand()
        msg.stop = True
        self.publisher_.publish(msg)
        self.get_logger().info('Returning to home position')


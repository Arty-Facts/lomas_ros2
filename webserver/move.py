import rclpy
from rclpy.node import Node
from lomas_interfaces.msg import MachineCommand, MachineStatus
import time

class MachineMover(Node):
    def __init__(self):
        super().__init__('machine_mover')
        self.publisher_ = self.create_publisher(MachineCommand, '/lomas/machine/cmd', 1)
        self.subscription = self.create_subscription(MachineStatus, '/lomas/machine/status', self.set_status, 1)
        self.hight = 27
        self.width = 25
        self.x = 0
        self.y = 0
        self.z = 0
        self.target_x = 0
        self.target_y = 0
        self.speed = 0.1

    def set_status(self, msg):
        self.logger.info(f"Received status: x={msg.x}, y={msg.y}, z={msg.z}")
        self.x = msg.x
        self.y = msg.y
        self.z = msg.z

    def move_once(self, x, y, z=0):
        msg = MachineCommand()
        msg.y = int((x * self.width)+0.5)
        msg.x = int((y * self.hight)+0.5)
        self.target_x = x * self.width
        self.target_y = y * self.hight
        msg.z = z
        msg.stop = False
        self.publisher_.publish(msg)
        self.get_logger().info(f'Moving to: x={msg.x}, y={msg.y}, z={msg.z}')
    
    def get_current_position(self):
        #fake current position
        if self.target_x - self.x > 0:
            self.x = self.x + self.speed
        else:
            self.x = self.x - self.speed
        if self.target_y - self.y > 0:
            self.y = self.y + self.speed
        else:
            self.y = self.y - self.speed

        curr_x = self.x/self.hight
        curr_y = self.y/self.width
        return curr_y, curr_x

    def go_home(self):
        msg = MachineCommand()
        msg.stop = True
        self.publisher_.publish(msg)
        self.get_logger().info('Returning to home position')


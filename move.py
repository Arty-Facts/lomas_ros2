import rclpy
from rclpy.node import Node
from lomas_interfaces.msg import MachineCommand
from sensor_msgs.msg import Image
import os
import cv2
import time
from cv_bridge import CvBridge

class MachineMover(Node):
    def __init__(self):
        super().__init__('machine_mover')
        self.publisher_ = self.create_publisher(MachineCommand, '/lomas/machine/cmd', 10)
        self.subscription = self.create_subscription(Image, '/lomas/camera/image', self.image_callback, 10)
        self.bridge = CvBridge()
        self.image_counter = 0
        os.makedirs('workspace/captured_images', exist_ok=True)

    def move_once(self, x, y, z=0):
        msg = MachineCommand()
        msg.x = x
        msg.y = y
        msg.z = z
        msg.stop = False
        self.publisher_.publish(msg)
        self.get_logger().info(f'Moving to: x={x}, y={y}, z={z}')

    def go_home(self):
        msg = MachineCommand()
        msg.stop = True
        self.publisher_.publish(msg)
        self.get_logger().info('Returning to home position')

    def image_callback(self, msg):
        image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        image_path = f"workspace/captured_images/image_{self.image_counter:04d}.jpg"
        cv2.imwrite(image_path, image)
        self.image_counter += 1
        self.get_logger().info(f'Saved image: {image_path}')

def main(target_x, target_y, target_z):
    rclpy.init()
    mover = MachineMover()

    # Move to target location
    mover.move_once(target_x, target_y, target_z)

    # Spin for 10 seconds to capture images while the robot is moving
    start_time = time.time()
    while time.time() - start_time < 10:  # Adjust the duration as needed
        rclpy.spin_once(mover, timeout_sec=0.1)

    # Return to home
    mover.go_home()
    start_time = time.time()
    while time.time() - start_time < 5:  # Capture images while returning home
        rclpy.spin_once(mover, timeout_sec=0.1)

    mover.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    x, y, z = 15, 15, 0
    main(x, y, z)

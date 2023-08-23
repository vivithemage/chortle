#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <boost/process.hpp>

namespace bp = boost::process; 

int main(int argc, char * argv[]) {
  // Process ros2-related command-line arguments and initialize ros2 for this process
  rclcpp::init(argc, argv);
  // Create a ros2 node, which owns one or more ros2 interfaces
  auto node = std::make_shared<rclcpp::Node>("hello_world_node");
  // Broadcast a simple log message
  RCLCPP_INFO(node->get_logger(), "test");  
  bp::system("pwd");
  // RCLCPP_INFO(node->get_logger(), "%s", out);
  // Process ros2 callbacks until receiving a SIGINT (ctrl-c)
  rclcpp::spin(node);
  // Stop the node's resources
  rclcpp::shutdown();
  // Exit tranquilly
  return 0;
}
#include "bar/bar.hpp"

Bar::Bar(): Node("Bar")
{
    foo();
}

int main(int argc, char **argv)
{
    // Initialize node and nodehandles
    rclcpp::init(argc, argv);

    auto node = std::make_shared<Bar>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);

    executor.spin();

    rclcpp::shutdown();
    return 0;
}
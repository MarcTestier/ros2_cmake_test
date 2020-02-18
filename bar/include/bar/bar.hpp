#ifndef BAR_HPP
#define BAR_HPP

#include <rclcpp/rclcpp.hpp>
#include "foo/foo.hpp"

class Bar : public rclcpp::Node {
public:
    Bar();

};

#endif  // BAR_HPP

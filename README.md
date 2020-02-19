# ros2_cmake_test

Simple example compiling a ROS 2 node (bar) depending on a pure cmake package (foo) using colcon.

(Repo originally made for [this question](https://answers.ros.org/question/344399/trying-to-compile-a-ros-2-eloquent-package-depending-on-a-pure-cmake-package-using-colcon/))

## Installation

Install ROS2, create a workspace, clone the repo and compile with:
```
colcon build --symlink-install
```


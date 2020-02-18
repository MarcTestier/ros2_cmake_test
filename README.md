# ros2_cmake_test

Trying to compile a ROS 2 node (bar) depending on a pure cmake package (foo) using colcon.

Compile with:
```
colcon build --symlink-install
```

## NOTE:

If you use `CMakeLists2.txt`, in the `bar` folder, which link directly against the `.so` file, the compilation works

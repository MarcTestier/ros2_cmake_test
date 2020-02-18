# ros2_cmake_test

Trying to compile a ROS 2 node (bar) depending on a pure cmake package (foo) using colcon,
the compilation fails with the following error:

```
<...>/bar.hpp:5:10: fatal error: foo/foo.hpp: No such file or directory
#include "foo/foo.hpp"
```


Compile with:
```
colcon build --symlink-install
```

## NOTE:

If you use `CMakeLists2.txt`, in the `bar` folder, which link directly against the `.so` file, the compilation works

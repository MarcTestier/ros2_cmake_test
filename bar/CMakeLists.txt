cmake_minimum_required(VERSION 3.5)
project(bar)

# Default to C99
if(NOT CMAKE_C_STANDARD)
    set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(foo REQUIRED)

include(GNUInstallDirs)

include_directories(include ${INCLUDE_DIRS})

## Declare a cpp executable
add_executable(Bar src/bar.cpp)
ament_target_dependencies(Bar rclcpp)
target_link_libraries(Bar foo)

install(TARGETS Bar
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS
  Bar
  DESTINATION lib/${PROJECT_NAME}
)

# ament_export_dependencies(mfm_common mfm_msgs)
ament_package()

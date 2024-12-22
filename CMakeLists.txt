cmake_minimum_required(VERSION 3.8)
project(module_1_assignment)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

include_directories(include)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)




# ADD TASK 4 Executables here
add_executable(task_1 src/task_1.cpp)
add_executable(task_2 src/task_2.cpp)
add_executable(task_3 src/task_3_main.cpp)
add_executable(task_4 src/Actuator.cpp src/main.cpp src/Robot.cpp)

ament_target_dependencies(task_1 rclcpp)
ament_target_dependencies(task_2 rclcpp)
ament_target_dependencies(task_3 rclcpp)
ament_target_dependencies(task_4 rclcpp)



install(TARGETS
  task_1
  task_2
  task_3
  task_4
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

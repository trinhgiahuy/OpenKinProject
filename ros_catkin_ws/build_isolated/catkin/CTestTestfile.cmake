# CMake generated Testfile for 
# Source directory: /home/pi/ros_catkin_ws/src/catkin
# Build directory: /home/pi/ros_catkin_ws/build_isolated/catkin
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_catkin_nosetests_test.local_tests "/home/pi/ros_catkin_ws/build_isolated/catkin/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/pi/ros_catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin/nosetests-test.local_tests.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/pi/ros_catkin_ws/src/catkin/test/local_tests --with-xunit --xunit-file=/home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin/nosetests-test.local_tests.xml")
add_test(_ctest_catkin_nosetests_test.unit_tests "/home/pi/ros_catkin_ws/build_isolated/catkin/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/pi/ros_catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin/nosetests-test.unit_tests.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/pi/ros_catkin_ws/src/catkin/test/unit_tests --with-xunit --xunit-file=/home/pi/ros_catkin_ws/build_isolated/catkin/test_results/catkin/nosetests-test.unit_tests.xml")
subdirs(gtest)

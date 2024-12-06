# CMake generated Testfile for 
# Source directory: /home/shiven/3rdparty/opencv_contrib-4.2.0/modules/structured_light
# Build directory: /home/shiven/3rdparty/opencv-4.2.0/build/modules/structured_light
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_structured_light "/home/shiven/3rdparty/opencv-4.2.0/build/bin/opencv_test_structured_light" "--gtest_output=xml:opencv_test_structured_light.xml")
set_tests_properties(opencv_test_structured_light PROPERTIES  LABELS "Extra;opencv_structured_light;Accuracy" WORKING_DIRECTORY "/home/shiven/3rdparty/opencv-4.2.0/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVUtils.cmake;1640;add_test;/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVModule.cmake;1282;ocv_add_test_from_target;/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVModule.cmake;1073;ocv_add_accuracy_tests;/home/shiven/3rdparty/opencv_contrib-4.2.0/modules/structured_light/CMakeLists.txt;2;ocv_define_module;/home/shiven/3rdparty/opencv_contrib-4.2.0/modules/structured_light/CMakeLists.txt;0;")

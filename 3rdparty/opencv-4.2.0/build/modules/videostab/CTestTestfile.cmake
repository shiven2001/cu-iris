# CMake generated Testfile for 
# Source directory: /home/shiven/3rdparty/opencv_contrib-4.2.0/modules/videostab
# Build directory: /home/shiven/3rdparty/opencv-4.2.0/build/modules/videostab
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_videostab "/home/shiven/3rdparty/opencv-4.2.0/build/bin/opencv_test_videostab" "--gtest_output=xml:opencv_test_videostab.xml")
set_tests_properties(opencv_test_videostab PROPERTIES  LABELS "Extra;opencv_videostab;Accuracy" WORKING_DIRECTORY "/home/shiven/3rdparty/opencv-4.2.0/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVUtils.cmake;1640;add_test;/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVModule.cmake;1282;ocv_add_test_from_target;/home/shiven/3rdparty/opencv-4.2.0/cmake/OpenCVModule.cmake;1073;ocv_add_accuracy_tests;/home/shiven/3rdparty/opencv_contrib-4.2.0/modules/videostab/CMakeLists.txt;11;ocv_define_module;/home/shiven/3rdparty/opencv_contrib-4.2.0/modules/videostab/CMakeLists.txt;0;")

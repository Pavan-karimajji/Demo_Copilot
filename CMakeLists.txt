cmake_minimum_required(VERSION 3.15)
project(KinematicModels)

set(CMAKE_CXX_STANDARD 11)

# Include headers
include_directories(include)

# Add the source files
set(SOURCE_FILES
    src/main.cpp
    src/KinematicModel.cpp
    src/ScientificCalculator.cpp
)

# Create the executable
add_executable(kinematic_models ${SOURCE_FILES})

# CMakeLists.txt in the tests folder

# Set the path to the Google Test include directory
#set(gtest_SOURCE_DIR C:/workspace/GH/googletest/googletest)

# Print the path of the Google Test source directory
#message("Google Test Source Directory: ${gtest_SOURCE_DIR}")

# Set up Google Test
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add the test source file
#set(TEST_SOURCE_FILES
  #  src/test_KinematicModel.cpp
 #   src/test_ScientificCalculator.cpp
#)

# Create the test executable, linking against the library
#add_executable(kinematic_model_tests ${TEST_SOURCE_FILES})

# Set the path to the directory containing gtest.lib
#set(GTEST_LIBRARY_PATH C:/workspace/GH/googletest/build/lib/Debug)

# Link against the Google Test library
#target_link_libraries(kinematic_model_tests ${GTEST_LIBRARY_PATH}/gtest.lib)

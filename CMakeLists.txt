cmake_minimum_required(VERSION 3.15)
project(CppCalculatorProject)

set(CMAKE_CXX_STANDARD 11)

# Add the source file
set(SOURCE_FILES calculator.cpp)

# Create the executable
add_executable(calculator ${SOURCE_FILES})

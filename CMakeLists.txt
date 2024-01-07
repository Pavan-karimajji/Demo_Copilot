cmake_minimum_required(VERSION 3.15)
project(KinematicModels)

set(CMAKE_CXX_STANDARD 11)

# Include headers
include_directories(include)

# Add the source files
set(SOURCE_FILES
    src/main.cpp
    src/KinematicModel.cpp
)

# Create the executable
add_executable(kinematic_models ${SOURCE_FILES})

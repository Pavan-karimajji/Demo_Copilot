# CMakeLists.txt in the tests folder

# Print the path of the Google Test source directory
message("Google Test Source Directory: ${gtest_SOURCE_DIR}")

# Set up Google Test
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add the test source file
set(TEST_SOURCE_FILES
    KinematicModelTest.cpp
)

# Print a green message to indicate that the test source files are being processed
message("\033[1;32mProcessing test source files: ${TEST_SOURCE_FILES}\033[0m")

# Create the test executable, linking against the library
add_executable(kinematic_model_tests ${TEST_SOURCE_FILES})

# Print a green message to indicate that the test executable is being created
message("\033[1;32mCreating test executable: kinematic_model_tests\033[0m")

# Link against Google Test and the main project library
target_link_libraries(kinematic_model_tests gtest gtest_main kinematic_library)

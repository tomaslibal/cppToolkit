cmake_minimum_required (VERSION 2.6)
project (cppToolkit CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/dist)
set(CMAKE_CXX_FLAGS "-std=c++11")

enable_testing()

# Depth First Search Test Suite
add_subdirectory(depthfirstsearch/test)

# Run cd /Users/weiminn/Documents/cpp_tutorial/ds && rm -rf build/ && mkdir build && cd build && cmake .. && make && cd ../.. && ./ds/build/bin/main

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(PROJECT_DIR "/Users/weiminn/Documents/cpp_tutorial/ds")

set(PROJECT_BUILD_DIR ${PROJECT_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BUILD_DIR}/bin)

cmake_minimum_required (VERSION 3.10)
project (library)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory (arraylist)
add_subdirectory (linkedlist)
add_subdirectory (queue)
add_subdirectory (stack)
add_subdirectory (graph)
add_subdirectory (main)
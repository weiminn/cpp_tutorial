# Ubuntu 

# Run cd /home/weiminn/Documents/cpp_tutorial/project && rm -rf build/ && mkdir build && cd build && cmake .. && make && cd ../.. && ./project/build/bin/main

set(CMAKE_CXX_COMPILER "/usr/lib/ccache/g++")
set(CMAKE_C_COMPILER "/usr/lib/ccache/gcc")
set(PROJECT_DIR "/home/weiminn/Documents/cpp_tutorial/project")

# Windows

# Follow to setup in windows: https://stackoverflow.com/questions/45150172/cmake-error-cmake-was-unable-to-find-a-build-program-corresponding-to-mingw-ma/74240313#74240313
# and https://stackoverflow.com/a/38434410
# Make sure to delete the previously generated cachefiles!!!
# Run cmake .. -G "MinGW Makefiles" & mingw32-make from inside build directory

# set(CMAKE_CXX_COMPILER "C:/msys64/mingw64/bin/g++.exe")
# set(CMAKE_C_COMPILER "C:/msys64/mingw64/bin/gcc.exe")
# set(PROJECT_DIR "C:/Users/Admin/Documents/cpp_tutorial/project/")

set(PROJECT_BUILD_DIR ${PROJECT_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BUILD_DIR}/bin)

cmake_minimum_required (VERSION 3.10)
project (library)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Recurse into the subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (person)
add_subdirectory (item)
add_subdirectory (main)
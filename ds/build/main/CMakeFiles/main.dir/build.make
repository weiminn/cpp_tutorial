# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/weiminn/Documents/cpp_tutorial/ds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weiminn/Documents/cpp_tutorial/ds/build

# Include any dependencies generated for this target.
include main/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/main.dir/flags.make

main/CMakeFiles/main.dir/src/main.cpp.o: main/CMakeFiles/main.dir/flags.make
main/CMakeFiles/main.dir/src/main.cpp.o: ../main/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weiminn/Documents/cpp_tutorial/ds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/main.dir/src/main.cpp.o"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/main && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/main.cpp.o -c /home/weiminn/Documents/cpp_tutorial/ds/main/src/main.cpp

main/CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/main && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weiminn/Documents/cpp_tutorial/ds/main/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

main/CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/main && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weiminn/Documents/cpp_tutorial/ds/main/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

bin/main: main/CMakeFiles/main.dir/src/main.cpp.o
bin/main: main/CMakeFiles/main.dir/build.make
bin/main: queue/libqueue.so
bin/main: stack/libstack.so
bin/main: tree/libtree.so
bin/main: linkedlist/liblinkedlist.so
bin/main: graph/libgraph.so
bin/main: arraylist/libarraylist.so
bin/main: main/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weiminn/Documents/cpp_tutorial/ds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/main"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/main.dir/build: bin/main

.PHONY : main/CMakeFiles/main.dir/build

main/CMakeFiles/main.dir/clean:
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/main && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/main.dir/clean

main/CMakeFiles/main.dir/depend:
	cd /home/weiminn/Documents/cpp_tutorial/ds/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weiminn/Documents/cpp_tutorial/ds /home/weiminn/Documents/cpp_tutorial/ds/main /home/weiminn/Documents/cpp_tutorial/ds/build /home/weiminn/Documents/cpp_tutorial/ds/build/main /home/weiminn/Documents/cpp_tutorial/ds/build/main/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/main.dir/depend


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
include tree/CMakeFiles/tree.dir/depend.make

# Include the progress variables for this target.
include tree/CMakeFiles/tree.dir/progress.make

# Include the compile flags for this target's objects.
include tree/CMakeFiles/tree.dir/flags.make

tree/CMakeFiles/tree.dir/src/treenode.cpp.o: tree/CMakeFiles/tree.dir/flags.make
tree/CMakeFiles/tree.dir/src/treenode.cpp.o: ../tree/src/treenode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weiminn/Documents/cpp_tutorial/ds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tree/CMakeFiles/tree.dir/src/treenode.cpp.o"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tree.dir/src/treenode.cpp.o -c /home/weiminn/Documents/cpp_tutorial/ds/tree/src/treenode.cpp

tree/CMakeFiles/tree.dir/src/treenode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/treenode.cpp.i"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weiminn/Documents/cpp_tutorial/ds/tree/src/treenode.cpp > CMakeFiles/tree.dir/src/treenode.cpp.i

tree/CMakeFiles/tree.dir/src/treenode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/treenode.cpp.s"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weiminn/Documents/cpp_tutorial/ds/tree/src/treenode.cpp -o CMakeFiles/tree.dir/src/treenode.cpp.s

tree/CMakeFiles/tree.dir/src/tree.cpp.o: tree/CMakeFiles/tree.dir/flags.make
tree/CMakeFiles/tree.dir/src/tree.cpp.o: ../tree/src/tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weiminn/Documents/cpp_tutorial/ds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tree/CMakeFiles/tree.dir/src/tree.cpp.o"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tree.dir/src/tree.cpp.o -c /home/weiminn/Documents/cpp_tutorial/ds/tree/src/tree.cpp

tree/CMakeFiles/tree.dir/src/tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree.dir/src/tree.cpp.i"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weiminn/Documents/cpp_tutorial/ds/tree/src/tree.cpp > CMakeFiles/tree.dir/src/tree.cpp.i

tree/CMakeFiles/tree.dir/src/tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree.dir/src/tree.cpp.s"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weiminn/Documents/cpp_tutorial/ds/tree/src/tree.cpp -o CMakeFiles/tree.dir/src/tree.cpp.s

# Object files for target tree
tree_OBJECTS = \
"CMakeFiles/tree.dir/src/treenode.cpp.o" \
"CMakeFiles/tree.dir/src/tree.cpp.o"

# External object files for target tree
tree_EXTERNAL_OBJECTS =

tree/libtree.so: tree/CMakeFiles/tree.dir/src/treenode.cpp.o
tree/libtree.so: tree/CMakeFiles/tree.dir/src/tree.cpp.o
tree/libtree.so: tree/CMakeFiles/tree.dir/build.make
tree/libtree.so: graph/libgraph.so
tree/libtree.so: arraylist/libarraylist.so
tree/libtree.so: tree/CMakeFiles/tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weiminn/Documents/cpp_tutorial/ds/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libtree.so"
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tree/CMakeFiles/tree.dir/build: tree/libtree.so

.PHONY : tree/CMakeFiles/tree.dir/build

tree/CMakeFiles/tree.dir/clean:
	cd /home/weiminn/Documents/cpp_tutorial/ds/build/tree && $(CMAKE_COMMAND) -P CMakeFiles/tree.dir/cmake_clean.cmake
.PHONY : tree/CMakeFiles/tree.dir/clean

tree/CMakeFiles/tree.dir/depend:
	cd /home/weiminn/Documents/cpp_tutorial/ds/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weiminn/Documents/cpp_tutorial/ds /home/weiminn/Documents/cpp_tutorial/ds/tree /home/weiminn/Documents/cpp_tutorial/ds/build /home/weiminn/Documents/cpp_tutorial/ds/build/tree /home/weiminn/Documents/cpp_tutorial/ds/build/tree/CMakeFiles/tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tree/CMakeFiles/tree.dir/depend

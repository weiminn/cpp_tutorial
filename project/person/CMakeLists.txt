cmake_minimum_required (VERSION 3.10)
project (person)

# register header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# create library binary for source file
add_library(person src/person.cpp)
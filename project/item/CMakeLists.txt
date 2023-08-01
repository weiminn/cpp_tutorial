cmake_minimum_required (VERSION 3.10)
project (item)

# register header files
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# import other library binaries from other project
# link_libraries(person)

# create library binary for source file
add_library(item src/item.cpp)

# target_link_libraries(item person)
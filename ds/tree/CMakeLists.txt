cmake_minimum_required (VERSION 3.10)
project (tree)

# create library binary for source file
add_library(tree SHARED 
    src/treenode.cpp
    src/tree.cpp
)

# register header files
target_include_directories(tree
 
    # PRIVATE 
    PUBLIC # propagate this down to targets that depends on this
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

target_link_libraries(tree
    PRIVATE
    arraylist
    graph
)
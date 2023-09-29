cmake_minimum_required (VERSION 3.10)
project (graph)

# create library binary for source file
add_library(graph SHARED 
    src/graph.cpp
    src/vertex.cpp
)

# register header files
target_include_directories(graph 
    # PRIVATE 
    PUBLIC # propagate this down to targes that depends on this
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    # no need to include nodes dir cos it's already included by arraylist proj
)

target_link_libraries(graph
    PRIVATE
    arraylist
)
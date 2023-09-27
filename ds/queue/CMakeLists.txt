cmake_minimum_required (VERSION 3.10)
project (queue)

# create library binary for source file
add_library(queue SHARED 
    src/queue.cpp
)

# register header files
target_include_directories(queue 
    # PRIVATE 
    PUBLIC # propagate this down to targets that depends on this
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

target_link_libraries(queue
    PRIVATE
    arraylist
    linkedlist
)
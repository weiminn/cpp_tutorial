cmake_minimum_required (VERSION 3.10)
project (linkedlist)

# create library binary for source file
add_library(linkedlist SHARED 
    src/linkedlist.cpp
)

# register header files
target_include_directories(linkedlist 
    # PRIVATE 
    PUBLIC # propagate this down to targes that depends on this
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

target_link_libraries(linkedlist
    PRIVATE
    arraylist
)
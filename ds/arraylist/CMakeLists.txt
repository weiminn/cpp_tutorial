cmake_minimum_required (VERSION 3.10)
project (arraylist)

# create library binary for source file
add_library(arraylist SHARED 
    src/arraylist.cpp
)

# register header files
target_include_directories(arraylist 
    # PRIVATE 
    PUBLIC # propagate this down to targes that depends on this
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

# target_link_libraries(arraylist
#     PRIVATE
#     project_name_of_the_added_library_before_this_block
# )
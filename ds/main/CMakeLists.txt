cmake_minimum_required (VERSION 3.10)
project (main)

# create executable binary from source file
add_executable(main src/main.cpp)

target_link_libraries(main
    arraylist
    linkedlist
    queue
    stack
    graph
)
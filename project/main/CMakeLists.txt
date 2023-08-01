cmake_minimum_required (VERSION 3.10)
project (main)

# import library binaries built for all add_executable and add_library below
# link_libraries(person)
# link_libraries(item)

add_executable(main src/main.cpp)

# link library to a specific target only
target_link_libraries(main 
    person
    item
)  
cmake_minimum_required (VERSION 3.10)
project (main)

add_executable(main src/main.cpp)

set(MAIN_DEP_HEADERS_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/../person/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../item/inc
)
target_include_directories(main 
    PRIVATE 
    ${MAIN_DEP_HEADERS_DIR}
)

# link library to a specific target only
target_link_libraries(main 
    person
    item
)  
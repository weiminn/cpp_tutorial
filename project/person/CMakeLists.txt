cmake_minimum_required (VERSION 3.10)
project (person)

# create library binary for source file
add_library(person src/person.cpp)

set(PERSON_DEP_HEADERS_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
# register header files
target_include_directories(person 
    PRIVATE 
    ${PERSON_DEP_HEADERS_DIR}
)
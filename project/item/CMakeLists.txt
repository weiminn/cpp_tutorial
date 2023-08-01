cmake_minimum_required (VERSION 3.10)
project (item)

# create library binary for source file
add_library(item src/item.cpp)

# register header files
set(ITEM_DEP_HEADERS_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/../person/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
target_include_directories(
    item
    PRIVATE
    ${ITEM_DEP_HEADERS_DIR}
    )

# import other library binaries from other project
target_link_libraries(item person)
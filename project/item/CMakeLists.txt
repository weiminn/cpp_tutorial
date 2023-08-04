cmake_minimum_required (VERSION 3.10)
project (item)

# create library binary for source file
add_library(item SHARED src/item.cpp)

# register header files
set(ITEM_DEP_HEADERS_DIR
    # ${CMAKE_CURRENT_SOURCE_DIR}/../person/inc # already got it from person's CMAKE include_directories being PUBLIC, so if it's PRIVATE, need to uncomment this code
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
target_include_directories(
    item
    # PRIVATE
    PUBLIC
    ${ITEM_DEP_HEADERS_DIR}
    )

# import other library binaries from other project
target_link_libraries(item
    PUBLIC # propagate this link to person to targerts that depends on item: main
    person
)
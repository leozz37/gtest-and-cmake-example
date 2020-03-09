cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(gtest-cmake CXX)

add_subdirectory(src)

include(cmake/googletest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/cmake
    ${PROJECT_BINARY_DIR}/googletest
    )

enable_testing()
add_subdirectory(test)

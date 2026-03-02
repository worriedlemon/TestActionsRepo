cmake_minimum_required(VERSION 3.12)

project(simple_test CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/${RESULTS_DIR})

add_compile_options(-Wall -Wextra -Wpedantic)

add_subdirectory(src)
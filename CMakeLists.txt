cmake_minimum_required(VERSION 3.14)
project(my_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

message(STATUS "project name = ${PROJECT_SOURCE_DIR}")

option(BUILD_TESTS "Include test targets" ON)
message(STATUS "Include test targets: ${BUILD_TESTS}")

#========================================
# SECTION: SOURCES
#========================================
add_subdirectory(src)

if(BUILD_TESTS)
    add_subdirectory(ut)
endif(BUILD_TESTS)

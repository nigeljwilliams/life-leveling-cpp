cmake_minimum_required(VERSION 3.23)

# Set variables for use later
#
set(_SUBDIR_NAME core)
set(_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/core")
set(_SRC_DIR "${CMAKE_SOURCE_DIR}/src/core")

# Add the library
#
add_library(${_SUBDIR_NAME} "${_SRC_DIR}/LifeLevelingApp.cpp")

# Add include directories
#
target_include_directories(${_SUBDIR_NAME} PRIVATE "${_INCLUDE_DIR}")

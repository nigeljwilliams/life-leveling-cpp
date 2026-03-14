cmake_minimum_required(VERSION 3.23)

# Set variables for use later
#
set(_SUBDIR_NAME core-utils)
set(_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/core/utils")
set(_SRC_DIR "${CMAKE_SOURCE_DIR}/src/core/utils")

# Add the library
#
add_library(${_SUBDIR_NAME}
    "${_SRC_DIR}/ActivityUtil.cpp"
    "${_SRC_DIR}/CleaningActivityUtil.cpp"
    "${_SRC_DIR}/ExerciseActivityUtil.cpp"
    "${_SRC_DIR}/FoodPrepActivityUtil.cpp"
    "${_SRC_DIR}/HygieneActivityUtil.cpp"
    "${_SRC_DIR}/YardWorkActivityUtil.cpp")

# Add include directories
#
target_include_directories(${_SUBDIR_NAME} PRIVATE "${_INCLUDE_DIR}")

cmake_minimum_required(VERSION 3.23)


# Set Required C++ standard (e.g. C++17)
#
set(CMAKE_CXX_STANDARD 17)

# Make sure CMake doesn't fall back on an older version without an error
#
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Set the project name
#
project(life-leveling-cpp)

# Set variables for use later
#
set(_EXECUTABLE_NAME LifeLevelingApp.exe)
set(_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(_SRC_DIR "${CMAKE_SOURCE_DIR}/src")

set(_CORE_SUBDIR "${_SRC_DIR}/core")
set(_CORE_UTILS_SUBDIR "${_CORE_SUBDIR}/utils")

# Add the Executable
#
add_executable(${_EXECUTABLE_NAME} "${_SRC_DIR}/Main.cpp")

# Add include directories
#
target_include_directories(${_EXECUTABLE_NAME} PRIVATE ${_INCLUDE_DIR})

# Add subdirectories
#
add_subdirectory(${_CORE_SUBDIR})
add_subdirectory(${_CORE_UTILS_SUBDIR})

# Link subdirectories
#
target_link_libraries(${_EXECUTABLE_NAME} PRIVATE core core-utils)
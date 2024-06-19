cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CPPPSO VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable
add_executable(CPPPSO src/main.cpp src/Pso.cpp)

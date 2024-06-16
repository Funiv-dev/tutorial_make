cmake_minimum_required(VERSION 3.10)

project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(tutorial_make tutorial.cxx)

target_include_directories(tutorial_make PUBLIC "${PROJECT_BINARY_DIR}")
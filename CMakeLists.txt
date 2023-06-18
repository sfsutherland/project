cmake_minimum_required(VERSION 3.26)
project(PROJECT VERSION 0.1)
configure_file(PROJECT_config.h.in PROJECT_config.h)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(PROJECT main.cpp)
target_include_directories(PROJECT PUBLIC "${PROJECT_BINARY_DIR}")
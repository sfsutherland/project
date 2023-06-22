cmake_minimum_required(VERSION 3.26)
project(PROJECT VERSION 0.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#set(CMAKE_BUILD_TYPE Debug)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
configure_file(${CMAKE_BINARY_DIR}/PROJECT_config.h.in ${SRC_DIR}/PROJECT_config.h)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(PROJECT ${SRC_DIR}/main.cpp)

target_include_directories(PROJECT PUBLIC ${SRC_DIR})
target_include_directories(PROJECT PUBLIC ${CONAN_INCLUDE_DIRS_SPDLOG})

target_link_libraries(PROJECT ${CONAN_LIBS_SPDLOG} ${CONAN_LIBS_FMT})
cmake_minimum_required(VERSION 3.26)
project(PROJECT VERSION 0.1)
configure_file(PROJECT_config.h.in PROJECT_config.h)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

SET(Boost_USE_STATIC_LIBS ON) 
find_package(Boost 1.82.0 COMPONENTS log REQUIRED)

add_executable(PROJECT main.cpp)
target_include_directories(PROJECT PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(PROJECT PUBLIC ${CONAN_INCLUDE_DIRS_BOOST})

target_link_libraries(PROJECT Boost::log_setup Boost::log)
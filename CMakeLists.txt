cmake_minimum_required(VERSION 3.6)
project(201610PyGeometry)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp base/vector2.hpp)
add_executable(201610PyGeometry ${SOURCE_FILES})
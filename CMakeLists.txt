cmake_minimum_required(VERSION 3.3)
project(pygeometry)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set(BOOST_ROOT "/Users/Vimer/Source/boost_1_62_0")
set(Boost_USE_STATIC_LIBS ON)


find_package(Boost REQUIRED COMPONENTS python)

if(NOT Boost_FOUND)
    message("Boost Not found")
endif()

if(NOT Boost_PYTHON_FOUND)
    message("Boost python Not found")
endif()

find_package(PythonLibs)

if(NOT PYTHONLIBS_FOUND)
    message("python Not found")
endif()

message(${Boost_INCLUDE_DIRS})
message(${Boost_LIBRARIES})
message(${PYTHON_INCLUDE_DIRS})
message(${PYTHON_LIBRARIES})

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${PYTHON_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp base/vector2.hpp)

add_library(pygeometry SHARED ${SOURCE_FILES})
set_target_properties(pygeometry PROPERTIES SUFFIX .so PREFIX "")

# add_library(pygeometry ${SOURCE_FILES})
# set_target_properties(pygeometry PROPERTIES PREFIX "")

target_link_libraries(pygeometry ${Boost_LIBRARIES})
target_link_libraries(pygeometry ${PYTHON_LIBRARIES})

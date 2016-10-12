cmake_minimum_required(VERSION 3.3)

if(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE "DEBUG")
    #SET(CMAKE_BUILD_TYPE "RELEASE")
    #SET(CMAKE_BUILD_TYPE "RELWITHDEBINFO")
    #SET(CMAKE_BUILD_TYPE "MINSIZEREL")
endif()

project(pygeometry)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test_py)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/test_py)


if(WIN32)
    message("windows system")
    set(BOOST_ROOT E:/Source/boost_1_62_0)
endif()

if(APPLE)
    message("maxos system")
    set(BOOST_ROOT /Users/Vimer/Source/boost_1_62_0)
endif()

set(Boost_USE_STATIC_LIBS OFF)
SET(Boost_USE_STATIC_RUNTIME OFF)

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

set(SOURCE_FILES geomertry_interface.cxx geometry/g2d/structure.hpp geometry/g2d/functions.hpp)

add_library(pygeometry SHARED ${SOURCE_FILES})

if(WIN32)
    set_target_properties(pygeometry PROPERTIES SUFFIX .pyd)
endif()
#
#if(APPLE)
#    set_target_properties(pygeometry PROPERTIES SUFFIX .so PREFIX "")
#endif()

# add_library(pygeometry ${SOURCE_FILES})
# set_target_properties(pygeometry PROPERTIES PREFIX "")

target_link_libraries(pygeometry ${Boost_LIBRARIES})
target_link_libraries(pygeometry ${PYTHON_LIBRARIES})

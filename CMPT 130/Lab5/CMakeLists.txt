cmake_minimum_required(VERSION 3.5)
project(Lab5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        functionFun.cpp
        makeFunctions.cpp
        )
add_executable(Lab5 ${SOURCE_FILES})
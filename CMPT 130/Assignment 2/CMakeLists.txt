cmake_minimum_required(VERSION 3.5)
project(Assignment_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
       habitCost.cpp
#        lemonade.cpp
        ansiicodes.h)
add_executable(Assignment_2 ${SOURCE_FILES})
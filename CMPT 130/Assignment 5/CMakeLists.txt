cmake_minimum_required(VERSION 3.6)
project(Assignment_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        vectorStats.cpp
        test.cpp
#        letterCount.cpp
#        ansiicodes.h
        )
add_executable(Assignment_5 ${SOURCE_FILES})
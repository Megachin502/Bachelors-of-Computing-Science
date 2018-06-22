cmake_minimum_required(VERSION 3.5)
project(Assignment_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        battery.cpp
#        beattheroll.cpp
#        brians.cpp
#        beatit.cpp
        test.cpp
        )
add_executable(Assignment_3 ${SOURCE_FILES})
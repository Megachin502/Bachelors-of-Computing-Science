cmake_minimum_required(VERSION 3.5)
project(assignment_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        hardDrivePerf.cpp.cpp
#        test.cpp
        )
add_executable(assignment_4 ${SOURCE_FILES})
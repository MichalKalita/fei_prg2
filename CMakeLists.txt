cmake_minimum_required(VERSION 3.3)
project(prg3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp KeyValue.cpp KeyValue.h Stack.cpp Stack.h)
add_executable(prg3 ${SOURCE_FILES})
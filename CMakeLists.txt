cmake_minimum_required(VERSION 3.15)
project(pcbuilder)

set(CMAKE_CXX_STANDARD 14)

add_executable(pcbuilder main.cpp)

set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
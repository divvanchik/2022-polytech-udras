cmake_minimum_required(VERSION 3.24)

project(HelloWorld VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld func.cpp hello_world.cpp func.h)

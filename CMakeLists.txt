cmake_minimum_required(VERSION 3.26)
project(GettingStarted)

set(CMAKE_CXX_STANDARD 17)

add_executable(GettingStarted main.cpp
        anotherClass.cpp
        anotherClass.h)

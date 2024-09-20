cmake_minimum_required(VERSION 3.29)
project(Lab3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab3 main.cpp
        myStack.cpp
        myStack.hpp
        catch.hpp
        unit_tests.cpp)

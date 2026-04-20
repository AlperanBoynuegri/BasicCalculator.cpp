cmake_minimum_required(VERSION 4.2)
project(BasicCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(BasicCalculator main.cpp
        functions.h
        Definitions.cpp)

cmake_minimum_required(VERSION 3.26)
project(CH10PLANTEXAMPLE)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH10PLANTEXAMPLE main.cpp
        Garden.cpp
        Garden.h
        Plant.cpp
        Plant.h
        Flower.cpp
        Flower.h)

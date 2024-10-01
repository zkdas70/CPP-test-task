cmake_minimum_required(VERSION 3.29)
project(test_task)

set(CMAKE_CXX_STANDARD 20)

add_executable(test_task main.cpp
        buildingData/Place.h
        buildingData/Comment.h
        buildingData/Building.h)

cmake_minimum_required(VERSION 3.29)
project(test_task)

set(CMAKE_CXX_STANDARD 20)

add_executable(test_task main.cpp
        vehicle/Vehicle.h
        vehicle/Car.cpp
        vehicle/Car.h
        vehicle/Teleport.cpp
        vehicle/Teleport.h)

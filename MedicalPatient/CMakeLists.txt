cmake_minimum_required(VERSION 3.31.5)

project( medical
    LANGUAGES CXX
    VERSION 0.1
)


add_executable( medical
hospital.cpp hospital.hpp patient.hpp patient.cpp
main.cpp)

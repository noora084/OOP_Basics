cmake_minimum_required(VERSION 3.31.5)

project( calender
    LANGUAGES CXX
    VERSION 0.1
)


add_executable( calender
event.cpp event.hpp calender.cpp calender.hpp main.cpp)

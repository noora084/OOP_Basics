cmake_minimum_required(VERSION 3.31.5)

project( gamecharacter
    LANGUAGES CXX
    VERSION 0.1
)


add_executable( gamecharacter
game.cpp game.hpp character.cpp character.hpp main.cpp)

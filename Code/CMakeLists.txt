cmake_minimum_required(VERSION 3.6)
project(tetris)

set(EXECUTABLE_NAME "tetris")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -lsfml-system -lsfml-window -lsfml-graphics")

set(SOURCE_FILES main.cpp Game.cpp Box.cpp Blocks.cpp Playfild.cpp Menu.cpp BlocksL.cpp include/BlocksL.h)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})
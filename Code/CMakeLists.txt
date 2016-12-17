cmake_minimum_required(VERSION 3.6)
project(tetris)

set(EXECUTABLE_NAME "tetris")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -lsfml-system -lsfml-window -lsfml-graphics")

file(GLOB HEDERS include/*.h)

set(BLOCKS Blocks.cpp BlocksT.cpp BlocksL.cpp BlocksS.cpp)

set(SOURCE_FILES main.cpp ${BLOCKS} Game.cpp Box.cpp Playfild.cpp Menu.cpp)

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES} ${HEDERS})
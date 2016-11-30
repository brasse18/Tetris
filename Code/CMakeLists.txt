cmake_minimum_required(VERSION 3.6)
project(Tetris)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADER_FILES include/*.h)

set(SOURCE_FILES main.cpp Game.cpp Player.cpp Playfild.cpp Scorebord.cpp Blocks.cpp Box.cpp ${HEADER_FILES})
add_executable(tetris ${SOURCE_FILES})

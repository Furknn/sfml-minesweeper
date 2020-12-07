cmake_minimum_required(VERSION 3.17)
project(sfml_minesweeper)

set(CMAKE_CXX_STANDARD 20)
find_package(SFML COMPONENTS audio graphics window system REQUIRED)
set(SOURCES main.cpp)

add_executable(sfml_minesweeper ${SOURCES})

target_link_libraries(sfml_minesweeper sfml-audio sfml-graphics sfml-window sfml-system)


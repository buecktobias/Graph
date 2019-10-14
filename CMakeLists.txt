cmake_minimum_required(VERSION 3.15)
project(Graph)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graph main.cpp Graph.cpp Graph.h Edge.cpp Edge.h Node.cpp Node.h)
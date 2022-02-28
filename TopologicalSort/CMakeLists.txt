cmake_minimum_required(VERSION 3.17)
project(TopologicalSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(TopologicalSort main.cpp cmake-build-debug/TopologicalSort_bfs.cpp cmake-build-debug/TopologicalSort_bfs.h)
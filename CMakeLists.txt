cmake_minimum_required(VERSION 3.23)
project(myshell)

set(CMAKE_CXX_STANDARD 17)

add_executable(myshell main.cpp xps.hpp)
add_subdirectory(pbin)
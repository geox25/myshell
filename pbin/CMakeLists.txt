cmake_minimum_required(VERSION 3.23)
project(myshell)

set(CMAKE_CXX_STANDARD 17)

add_executable(hp ../psrc/help.cpp)
add_executable(show ../psrc/show.cpp)
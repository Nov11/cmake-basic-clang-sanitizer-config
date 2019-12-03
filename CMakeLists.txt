cmake_minimum_required(VERSION 3.14)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE on)

#memory
#set(CMAKE_CXX_FLAGS "-fno-omit-frame-pointer -fsanitize=memory -fno-optimize-sibling-calls -O1")
set(CMAKE_CXX_FLAGS "-fno-omit-frame-pointer -fsanitize=address -fno-optimize-sibling-calls -O1")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_C_COMPILER "/usr/bin/clang")

add_executable(uninitialized uninitialized.cpp)
add_executable(index-out-of-bound index-out-of-bound.cpp)
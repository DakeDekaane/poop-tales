cmake_minimum_required(VERSION 2.8.9)
project(PoopTales)
set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(PoopTales ${SOURCES})


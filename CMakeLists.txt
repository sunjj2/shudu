cmake_minimum_required(VERSION 3.29)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)   #包含头文件目录

add_executable(untitled1
        src/block.h
        src/block.cpp
        src/utility.inl
        src/input.cpp
        src/input.h
        src/i18n.cpp
        src/i18n.h
        src/system_env.hpp


)
cmake_minimum_required(VERSION 3.25)
project(CProject C)

set(CMAKE_C_STANDARD 11)

add_executable(CProject main.c main.cpp Student.h Student.cpp Human.cpp Human.h)

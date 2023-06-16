cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp Student.h Osoba.h Identifiable.h Pracownik.h Osoba.cpp Pracownik.cpp Student.cpp Vector.h Vector.cpp)

cmake_minimum_required(VERSION 4.1)
project(practica)

set(CMAKE_CXX_STANDARD 11)

add_executable(herencia Device.cpp Device.h
        Display.cpp
        Display.h
        Processor.cpp
        Processor.h
        Keyboard.cpp
        Keyboard.h
        CharKeyboard.cpp
        CharKeyboard.h
        LineKeyboard.cpp
        LineKeyboard.h
        main.cpp)

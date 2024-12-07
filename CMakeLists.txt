cmake_minimum_required(VERSION 3.28.6)
project(dkr_informatics C)

set(CMAKE_C_STANDARD 11)

add_executable(dkr_informatics main.c
        input_methods.h
        input_methods.c
        calculation_methods.c
        calculation_methods.h)

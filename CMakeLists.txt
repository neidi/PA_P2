cmake_minimum_required(VERSION 3.29)
project(pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(Stack_fixed
        stacks/main.c
        stacks/stack_fixed.h
        stacks/stack_fixed.c)
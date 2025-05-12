cmake_minimum_required(VERSION 3.29)
project(pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(Stack_dynamic
        stacks/main.c
        stacks/stack_dynamic.h
        stacks/stack_dynamic.c)
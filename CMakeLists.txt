cmake_minimum_required(VERSION 3.29)
project(pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(Queue_dynamic
        queues/main.c
        queues/queue_dynamic.h
        queues/queue_dynamic.c)
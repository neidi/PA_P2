cmake_minimum_required(VERSION 3.29)
project(pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(searches_linear
        searches/linear_search_array.c)

add_executable(selection_sort
        sorts/selection_sort_array.c)

add_executable(bubble_sort
        sorts/bubble_sort_array.c)

cmake_minimum_required(VERSION 3.29)
project(pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(DoublyLinkedList_Add
        doubly-linked-lists/uebung_add.c
        doubly-linked-lists/list.c
        doubly-linked-lists/list.h
)
add_executable(DoublyLinkedList_Append
        doubly-linked-lists/uebung_append.c
        doubly-linked-lists/list.c
        doubly-linked-lists/list.h
)
add_executable(DoublyLinkedList_Insert
        doubly-linked-lists/uebung_insert.c
        doubly-linked-lists/list.c
        doubly-linked-lists/list.h
)
add_executable(DoublyLinkedList_Delete
        doubly-linked-lists/uebung_delete.c
        doubly-linked-lists/list.c
        doubly-linked-lists/list.h
)
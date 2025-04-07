// list.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List* create_list(void) {
    List* list = (List*)malloc(sizeof(List));
    if (!list) return NULL;
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void add(List* list, int data) {
}

void append(List* list, int data) {
}

int insert(List* list, int index, int data) {
    return 1;
}

int delete(List* list, int index) {
    return 1;
}

void traverse(const List* list) {
}

void free_list(List* list) {
    Node* curr = list->head;
    while (curr) {
        Node* next = curr->next;
        free(curr);
        curr = next;
    }
    free(list);
}

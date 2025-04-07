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
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->previous = NULL;
    node->next = list->head;

    if (list->head)
        list->head->previous = node;
    else
        list->tail = node;

    list->head = node;
    list->size++;
}

void append(List* list, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->previous = list->tail;

    if (list->tail)
        list->tail->next = node;
    else
        list->head = node;

    list->tail = node;
    list->size++;
}

int insert(List* list, int index, int data) {
    if (index < 0 || index > list->size)
        return 0;

    if (index == 0) {
        add(list, data);
        return 1;
    } else if (index == list->size) {
        append(list, data);
        return 1;
    }

    Node* curr = list->head;
    for (int i = 0; i < index - 1; i++)
        curr = curr->next;

    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = curr->next;
    node->previous = curr;

    if (curr->next)
        curr->next->previous = node;

    curr->next = node;

    list->size++;
    return 1;
}

int delete(List* list, int index) {
    if (index < 0 || index >= list->size)
        return 0;

    Node* curr = list->head;
    for (int i = 0; i < index; i++)
        curr = curr->next;

    if (curr->previous)
        curr->previous->next = curr->next;
    else
        list->head = curr->next;

    if (curr->next)
        curr->next->previous = curr->previous;
    else
        list->tail = curr->previous;

    free(curr);
    list->size--;

    return 1;
}

void traverse(const List* list) {
    Node* curr = list->head;
    while (curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
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

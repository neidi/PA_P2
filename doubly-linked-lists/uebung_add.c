#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void testCases() {
    List* list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;

    add(list, 5);
    add(list, 15);
    add(list, 10);
    add(list, 7);

    assert(list->head->data == 7);
    assert(list->head->next->data == 10);
    assert(list->head->next->next->data == 15);
    assert(list->head->next->next->next->data == 5);

    assert(list->tail->data == 5);
    assert(list->tail->previous->data == 15);
    assert(list->tail->previous->previous->data == 10);
    assert(list->tail->previous->previous->previous->data == 7);

    assert(list->size == 4);

    printf("tests passed, great job!");
}

int main() {
    testCases();
}
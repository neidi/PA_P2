#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


void testCases() {
    List* list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;

    append(list, 5);
    append(list, 15);
    append(list, 10);
    append(list, 7);

    assert(list->head->data == 5);
    assert(list->head->next->data == 15);
    assert(list->head->next->next->data == 10);
    assert(list->head->next->next->next->data == 7);
    assert(list->size == 4);

    assert(list->tail->data == 7);
    assert(list->tail->previous->data == 10);
    assert(list->tail->previous->previous->data == 15);
    assert(list->tail->previous->previous->previous->data == 5);

    printf("tests passed, great job!");
}

int main() {
    testCases();
}
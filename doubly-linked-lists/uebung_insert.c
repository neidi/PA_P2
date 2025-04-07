#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void testCases() {
    List* list = create_list();

    assert(insert(list, 0, 5) ==  1);
    assert(insert(list, 0, 15) == 1);
    assert(insert(list, 0, 10) == 1);
    assert(insert(list, 1, 7) == 1);

    assert(list->head->data == 10);
    assert(list->head->next->data == 7);
    assert(list->head->next->next->data == 15);
    assert(list->head->next->next->next->data == 5);

    assert(list->tail->data == 5);
    assert(list->tail->previous->data == 15);
    assert(list->tail->previous->previous->data == 7);
    assert(list->tail->previous->previous->previous->data == 10);

    assert(list->size == 4);

    printf("tests passed, great job!");
}

int main() {
    testCases();
}
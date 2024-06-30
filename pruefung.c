#include <stdio.h>
#include <stdlib.h>
#include "list.c"

void setupList(List* list)
{
    append(list, 3);
    append(list, 19);
    append(list, 7);
    append(list, 17);
    append(list, 23);
    append(list, 16);
    append(list, 5);
    append(list, 20);
}

int main(){
    List* list = (List*)malloc(sizeof(List));
    setupList(list);
    testCasesUnorderedList(list);
}
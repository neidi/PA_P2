#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node* next;
    struct node* previous;
} Node;

typedef struct {
    int size;
    Node* head;
    Node* tail;
} List;

Node* createNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    return node;
}

void append(List* list, int data){
    Node* newNode = createNode(data);
    if(list->size == 0)
    {
        list->head = newNode;
        list->tail = newNode;
        list->size++;
        return;
    }
    newNode->previous = list->tail;
    list->tail->next = newNode;
    list->tail = newNode;
    list->size++;
}

Node* elementAt(List* list, int index){
    Node* current = list->head;
    int currentIndex = 0;

    for(int i = 0; i < index; i++){
        if(current == NULL){
            return NULL;
        }
        current = current->next;
        currentIndex++;
    }

    return current;
}

void testCasesUnorderedList(List* list){
    assert(list->head->data == 3);
    assert(elementAt(list, 0)->data == 3);
    assert(elementAt(list, 1)->data == 19);
    assert(elementAt(list, 2)->data == 7);
    assert(elementAt(list, 3)->data == 17);
    assert(elementAt(list, 4)->data == 23);
    assert(elementAt(list, 5)->data == 16);
    assert(elementAt(list, 6)->data == 5);
    assert(elementAt(list, 7)->data == 20);
    assert(list->tail == elementAt(list, 7));
    assert(list->size == 8);

    printf("congratulations all tests passed");
}
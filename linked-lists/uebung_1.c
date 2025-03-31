#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list {
    int size;
    Node *head;
} List;

void appendNode(List *list, Node *node, int value) {
    if (node->next == NULL) {
        node->next = malloc(sizeof(Node));
        node->next->data = value;
        list->size++;
        return;
    }

    appendNode(list, node->next, value);
}

void append(List *list, int value) {
    if (list->head == NULL) {
        list->head = malloc(sizeof(Node));
        list->head->next = NULL;
        list->head->data = value;
        list->size = 1;
        return;
    }

    appendNode(list, list->head, value);
}

void add(List *list, int value) {
    if (list->head == NULL) {
        list->head = malloc(sizeof(Node));
        list->head->next = NULL;
        list->head->data = value;
        list->size = 1;
        return;
    }

    Node *previousHead = list->head;
    Node *newNode = malloc(sizeof(Node));
    newNode->next=previousHead;
    newNode->data = value;
    list->head = newNode;
    list->size++;
}

void removeAt(List* list, int index){
    if (list == NULL || index < 0 || index >= list->size) {
        return; // Ungültiger Index oder leere Liste
    }

    Node* temp;
    if (index == 0) {
        temp = list->head;
        list->head = list->head->next;
        free(temp);
    } else {
        Node* current = list->head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        temp = current->next;
        current->next = current->next->next;
        free(temp);
    }

    list->size--;
}

void testCases() {
    List *list = malloc(sizeof(List));
    list->head = NULL;
    append(list, 5);
    add(list, 3);
    append(list, 10);

    assert(list->head->data == 3);
    assert(list->head->next->data == 5);
    assert(list->head->next->next->data == 10);
    assert(list->size == 3);

    removeAt(list, 1);

    assert(list->head->data == 3);
    assert(list->head->next->data == 10);
    assert(list->size == 2);

    printf(GREEN "tests passed, great job!" RESET);
}

int main() {
    testCases();
}
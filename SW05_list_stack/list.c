#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

typedef struct list
{
    Node *head;
    Node *tail;
    int size;
} List;

// Schreibe eine Methode append_node, die eine Node am Ende der Liste anfügt
void append_node(List *list, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (list->head == NULL)
    {
        newNode->next = NULL;
        list->size = 1;
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    list->tail->next = newNode;
    newNode->prev = list->tail;
    list->tail = newNode;
    list->size++;
}

// Schreibe eine Methode print_list_forward, die die Liste vom Anfang (head) zum Ende (tail) ausgibt.
void print_list_forward(List *list)
{
    printf("printing from head to tail\n");
    if (list->size == 0)
    {
        printf("no values in list");
        return;
    }

    int index = 0;
    Node *currentNode = list->head;
    while (currentNode != NULL)
    {
        printf("Node at index %d contains data %d\n", index, currentNode->data);
        currentNode = currentNode->next;
        index++;
    }
}

// Schreibe eine Methode print_list_backwards, die die Liste vom Ende (tail) zum Anfang (head) ausgibt.
void print_list_backwards(List *list)
{
    printf("printing from tail to head\n");
    if (list->size == 0)
    {
        printf("no values in list");
        return;
    }

    int index = list->size - 1;
    Node *currentNode = list->tail;
    while (currentNode != NULL)
    {
        printf("Node at index %d contains data %d\n", index, currentNode->data);
        currentNode = currentNode->prev;
        index--;
    }
}

void main()
{
    List *newList = (List *)malloc(sizeof(List));
    newList->head = NULL;
    newList->tail = NULL;
    newList->size = 0;
    // append_node(newList, 3);
    // append_node(newList, 4);
    // append_node(newList, 2);
    // print_list_forward(newList);
    // print_list_backwards(newList);
}
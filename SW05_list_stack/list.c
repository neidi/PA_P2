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

// Schreibe eine Methode print_list_forward, die die Liste vom Anfang (head) zum Ende (tail) ausgibt.

// Schreibe eine Methode print_list_backwards, die die Liste vom Ende (tail) zum Anfang (head) ausgibt.

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
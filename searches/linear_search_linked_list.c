#include <stdio.h>
#include <stdlib.h>

// Struktur für einen Knoten der Liste
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

// Struktur für die Liste
typedef struct list
{
    Node *head;
    Node *tail;
    int size;
} List;

// Funktion zum Erstellen eines neuen Knotens
Node *create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

// Funktion zum Einfügen eines neuen Knotens am Ende der Liste
void append(List *list, int data)
{
    Node *new_node = create_node(data);
    if (list->size == 0)
    {
        // Liste ist leer
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        // Liste ist nicht leer
        new_node->prev = list->tail;
        list->tail->next = new_node;
        list->tail = new_node;
    }
    list->size++;
}

int linearSearch(List *list, int target)
{
    Node *current = list->head;
    int index = 0;
    while (current != NULL)
    {
        if (current->data == target)
            return index;

        current = current->next;
        index++;
    }
    return -1; // Ziel nicht gefunden, -1 zurückgeben
}

int main()
{
    // Neue Liste erstellen
    List *list = (List *)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    // Knoten am Ende der Liste einfügen
    append(list, 1);
    append(list, 6);
    append(list, 3);
    append(list, 8);
    append(list, 7);
    append(list, 9);
    append(list, 99);
    append(list, 37);
    append(list, 17);
    int target = 9;
    int result = linearSearch(list, target);

    if (result != -1)
    {
        printf("Zahl %d gefunden an Index %d\n", target, result);
    }
    else
    {
        printf("Zahl %d nicht gefunden\n", target);
    }

    return 0;
}
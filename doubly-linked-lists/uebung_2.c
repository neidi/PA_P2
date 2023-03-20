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

void push(List *list, int data)
{
    Node *new_node = create_node(data);

    if (list->head == NULL)
    {
        new_node->next = NULL;
        list->head = new_node;
        list->tail = new_node;
        return;
    }

    new_node->next = list->head;
    list->head->prev = new_node;
    list->head = new_node;
    list->size++;
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

void printList(List *list)
{
    Node *currentNode = list->head; // Aktueller Knoten als Kopie des Startknotens initialisieren
    printf("Liste: ");
    while (currentNode != NULL) // Solange der aktuelle Knoten nicht der Endknoten ist
    {

        printf("%d ", currentNode->data); // Daten des aktuellen Knotens ausgeben
        currentNode = currentNode->next;  // Nächsten Knoten als aktuellen Knoten setzen
    }
    printf("\n");
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
    append(list, 2);
    append(list, 3);
    // Liste ausgeben
    printList(list);

    List *list2 = (List *)malloc(sizeof(List));
    list2->head = NULL;
    list2->tail = NULL;
    list2->size = 0;
    push(list2, 3);
    push(list2, 2);
    push(list2, 1);

    // Liste ausgeben
    printList(list2);

    return 0;
}

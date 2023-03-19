#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL; // Startknoten der Liste

struct Node
{
    int data;
    struct Node *next;
};

void printList()
{
    struct Node *currentNode = head; // Aktueller Knoten als Kopie des Startknotens initialisieren
    printf("Liste: ");
    while (currentNode != NULL)
    {                                     // Solange der aktuelle Knoten nicht der Endknoten ist
        printf("%d ", currentNode->data); // Daten des aktuellen Knotens ausgeben
        currentNode = currentNode->next;  // Nächsten Knoten als aktuellen Knoten setzen
    }
    printf("\n");
}

void main()
{
    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));

    node1->data = 42;
    node2->data = 24;

    node1->next = node2;
    node2->next = NULL;
    head = node1;

    printList();
}
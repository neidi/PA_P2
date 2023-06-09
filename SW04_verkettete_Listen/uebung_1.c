#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL; // Startknoten der Liste

struct Node
{
    int data;
    struct Node *next;
};

void addNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // Speicherplatz für neuen Knoten reservieren
    newNode->data = data;                                              // Daten im Knoten speichern
    newNode->next = head;                                              // Neuen Knoten als Startknoten der Liste einfügen
    head = newNode;                                                    // Head auf neuen Knoten setzen
}

void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        free(temp);             // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp); // Free memory
}

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

void deleteList()
{
    struct Node *currentNode = head;
    while (currentNode != NULL)
    {                                              // Solange der aktuelle Knoten nicht der Endknoten ist
        struct Node *nextNode = currentNode->next; // Nächsten Knoten speichern
        free(currentNode);                         // Aktuellen Knoten löschen
        currentNode = nextNode;                    // Nächsten Knoten als aktuellen Knoten setzen
    }
    head = NULL; // Head auf NULL setzen, um zu signalisieren, dass die Liste leer ist
}

void main()
{
    addNode(24);
    addNode(42);
    deleteNode(&head, 42);
    printList();
}
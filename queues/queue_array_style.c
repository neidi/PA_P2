#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3

typedef struct
{
    int front;
    int rear;
    int elements[MAX_SIZE];
} Queue;

Queue *createQueue()
{
    // TODO
}

int isFull(Queue *queue)
{
    // TODO
}

int isEmpty(Queue *queue)
{
    // TODO
}

void enqueue(Queue *queue, int value)
{
    // TODO
}

int dequeue(Queue *queue)
{
    // TODO
}

void main()
{
    // TODO: Nachfolgender Code sollte (wenn er nicht mehr auskommentiert ist) lauffähig sein
    // Queue *queue = createQueue();
    // enqueue(queue, 5);
    // enqueue(queue, 17);
    // enqueue(queue, 1);
    // enqueue(queue, 1); // should print error

    // dequeue(queue);
    // dequeue(queue);
    // dequeue(queue);
    // dequeue(queue); // should print error;
}
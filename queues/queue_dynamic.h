#ifndef QUEUE_DYNAMIC_H
#define QUEUE_DYNAMIC_H

#include <stdbool.h>

typedef struct element{
    struct element* next;
    int data;
} Element;

typedef struct {
    Element* front;
    int size;
} Queue;

Queue* createQueue();

bool isEmpty(Queue *q);

bool enqueue(Queue *q, int value);

int dequeue(Queue *q);

int peek(Queue *q);

#endif //QUEUE_DYNAMIC_H

#ifndef QUEUE_FIXED_H
#define QUEUE_FIXED_H

#include <stdbool.h>

#define MAX_SIZE 3

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

void init(Queue *q);

bool isEmpty(Queue *q);

bool isFull(Queue *q);

bool enqueue(Queue *q, int value);

int dequeue(Queue *q);

int peek(Queue *q);

#endif //QUEUE_FIXED_H

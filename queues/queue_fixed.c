#include "queue_fixed.h"

#define MAX_SIZE 3

void init(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

bool isEmpty(Queue *q) {
    return q->size == 0;
}

bool isFull(Queue *q) {
    return q->size == MAX_SIZE;
}

bool enqueue(Queue *q, int value) {
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->data[q->rear] = value;
    q->size++;
}

int dequeue(Queue *q) {
    int value = q->data[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;
    return value;
}

int peek(Queue *q) {
    return q->data[q->front];
}

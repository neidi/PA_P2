#include "queue_dynamic.h"
#include <stdlib.h>

Queue *createQueue() {
    Queue *q = (Queue *) malloc(sizeof(Queue));
    if (q) {
        q->front = NULL;
        q->size = 0;
    }
    return q;
}

bool isEmpty(Queue *q) {
}

bool enqueue(Queue *q, int value) {
}

int dequeue(Queue *q) {
}

int peek(Queue *q) {
}

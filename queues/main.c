#include "queue_fixed.h"
#include <stdio.h>
#include <assert.h>

void testQueue() {
    Queue q;
    init(&q);

    assert(isEmpty(&q));
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    assert(!isEmpty(&q));
    assert(isFull(&q) == true);
    assert(peek(&q) == 10);

    assert(dequeue(&q) == 10);
    assert(peek(&q) == 20);
    assert(dequeue(&q) == 20);
    assert(dequeue(&q) == 30);
    assert(isEmpty(&q));

    printf("Congratulations! All test cases passed!\n");
}

int main() {
    testQueue();
    return 0;
}
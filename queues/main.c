#include "queue_dynamic.h"
#include <stdio.h>
#include <assert.h>

void testQueue() {
    Queue *q = createQueue();

    assert(isEmpty(q));
    assert(enqueue(q, 10));
    assert(enqueue(q, 20));
    assert(enqueue(q, 30));
    assert(!isEmpty(q));
    assert(peek(q) == 10);

    assert(dequeue(q) == 10);
    assert(peek(q) == 20);
    assert(dequeue(q) == 20);
    assert(dequeue(q) == 30);
    assert(isEmpty(q));
    assert(dequeue(q) == -1);

    printf("Congratulations! All test cases passed!\n");
}

int main() {
    testQueue();
    return 0;
}
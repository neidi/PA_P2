#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct element
{
    int data;
    struct element *next;
} Element;

typedef struct
{
    Element *front;
    int size;
} Queue;

void enqueue(Queue *queue, int data)
{
    Element *new = (Element *)malloc(sizeof(Element));

    queue->rear->next = new;
    queue->rear = new;
    queue->size++;
}

int dequeue(Queue *queue)
{
    Element *frontNode = queue->front;
    return returnValue;
}

void testCasesEnqueue(Queue* queue){
    enqueue(queue, 5);
    assert(queue->front->data == 5);
    assert(queue->rear->data == 5);
    assert(queue->size == 1);
    enqueue(queue, 3);
    assert(queue->front->next->data == 3);
    assert(queue->rear->data == 3);
    assert(queue->size == 2);
    enqueue(queue, 1);
    assert(queue->rear->data == 1);
    assert(queue->size == 3);
    
    printf("congratulations all tests for enqueueing passed\n");
}

void testCasesDequeue(Queue* queue){
    dequeue(queue);
    assert(queue->size == 2);
    assert(queue->front->data == 3);
    dequeue(queue);
    assert(queue->size == 1);
    assert(queue->front->data == 1);
    dequeue(queue);
    assert(queue->size == 0);

    printf("congratulations all tests for dequeueing passed\n");
}

int main()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    testCasesEnqueue(queue);
    testCasesDequeue(queue);
    dequeue(queue);

    return -1;
}
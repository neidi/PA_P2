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
    Queue *queue = malloc(sizeof(Queue));
    queue->front = 0;
    queue->rear = 0;
    return queue;
}

int isFull(Queue *queue)
{
    return queue->rear >= MAX_SIZE;
}

int isEmpty(Queue *queue)
{
    return queue->rear == -1 || queue->front == queue->rear;
}

void enqueue(Queue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Error: queue overflow!\n");
        return;
    }
    queue->elements[queue->rear++] = value;
    printf("enqueued %d\n", value);
}

int dequeue(Queue *queue)
{

    if (isEmpty(queue))
    {
        printf("Error: queue is empty!\n");
        queue->front = -1;
        queue->rear = -1;
        return -1;
    }
    int frontElement = queue->elements[queue->front];
    queue->front++;
    printf("dequeueing %d\n", frontElement);
    return frontElement;
}

void main()
{
    Queue *queue = createQueue();
    enqueue(queue, 5);
    enqueue(queue, 17);
    enqueue(queue, 1);
    enqueue(queue, 1); // should print error

    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue); // should print error;
}
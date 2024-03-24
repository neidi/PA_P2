#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
    int size;
} Queue;

void enqueue(Queue *queue, int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    if (queue->size == 0)
    {
        queue->front = new;
        queue->rear = new;
        queue->size++;
        return;
    }

    queue->rear->next = new;
    queue->rear = new;
    queue->size++;
}

int dequeue(Queue *queue)
{
    if (queue->size == 0)
    {
        return -1;
    }

    Node *frontNode = queue->front;
    queue->front = queue->front->next;
    queue->size--;
    int returnValue = frontNode->data;
    free(frontNode);
    return returnValue;
}

int main()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    enqueue(queue, 5);
    enqueue(queue, 3);
    enqueue(queue, 1);
    printf("current element: %d\n", dequeue(queue));
    printf("current element: %d\n", dequeue(queue));
    printf("current element: %d\n", dequeue(queue));
    return -1;
}

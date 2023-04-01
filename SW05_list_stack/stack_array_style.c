#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3

typedef struct
{
    int top;
    int elements[MAX_SIZE];
} Stack;

Stack *createStack()
{
    Stack *stack = malloc(sizeof(Stack));
    stack->top = 0;
    return stack;
}

int peek(Stack *stack)
{
    return stack->elements[stack->top - 1];
}

void push(Stack *stack, int value)
{
    if (stack->top < MAX_SIZE)
    {
        stack->elements[stack->top++] = value;
        printf("added %d\n", peek(stack));
    }
    else
    {
        printf("Error: stack overflow!\n");
    }
}

int pop(Stack *stack)
{
    if (stack->top > 0)
    {
        printf("removing %d\n", peek(stack));
        int topElement = stack->elements[--stack->top];
        return topElement;
    }
    else
    {
        printf("Error: stack is empty!\n");
        return -1;
    }
}

void main()
{
    Stack *stack = createStack();
    push(stack, 5);
    push(stack, 17);
    push(stack, 1);
    push(stack, 1); // should print error

    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack); // should print error;
}
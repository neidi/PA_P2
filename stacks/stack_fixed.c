#include <stdlib.h>
#include <stdbool.h>
#include "stack_fixed.h"

#define MAX_SIZE 3

Stack *createStack() {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = 0;
    return stack;
}

int peek(Stack *stack) {
    if (stack->top == 0) {
        return -1;
    }
    return stack->elements[stack->top - 1];
}

bool push(Stack *stack, int value) {
    if (stack->top < MAX_SIZE) {
        stack->elements[stack->top++] = value;
        return true;
    } else {
        return false;
    }
}

int pop(Stack *stack) {
    if (stack->top > 0) {
        int topElement = stack->elements[--stack->top];
        return topElement;
    } else {
        return -1;
    }
}

bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE;
}

bool isEmpty(Stack *stack) {
    return stack->top == 0;
}
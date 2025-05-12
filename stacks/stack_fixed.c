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
}

bool push(Stack *stack, int value) {
}

int pop(Stack *stack) {
}

bool isFull(Stack *stack) {
}

bool isEmpty(Stack *stack) {
}
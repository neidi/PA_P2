//
// Created by Simon Neidhart on 12.05.2025.
//

#ifndef POINTERS_STACK_FIXED_H
#define POINTERS_STACK_FIXED_H

#define MAX_SIZE 3

typedef struct {
    int top;
    int elements[MAX_SIZE];
} Stack;

Stack *createStack();

int peek(Stack *stack);

bool push(Stack *stack, int value);

int pop(Stack *stack);

bool isFull(Stack *stack);

bool isEmpty(Stack *stack);

#endif //POINTERS_STACK_FIXED_H

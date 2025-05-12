//
// Created by Simon Neidhart on 12.05.2025.
//
#include <stdlib.h>
#include <stdbool.h>

#ifndef POINTERS_STACK_DYNAMIC_H
#define POINTERS_STACK_DYNAMIC_H

typedef struct element
{
    int data;
    struct element *previous;
} Element;

typedef struct stack
{
    Element *top;
    int size;
} Stack;

Stack *createStack();

int peek(Stack *stack);

void push(Stack *stack, int value);

int pop(Stack *stack);

bool isEmpty(Stack *stack);

#endif //POINTERS_STACK_DYNAMIC_H

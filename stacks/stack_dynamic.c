//
// Created by Simon Neidhart on 12.05.2025.
//

#include "stack_dynamic.h"

Stack *createStack() {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}

Element *createElement(int data) {
    Element *element = malloc(sizeof(Element));
    element->previous = NULL;
    element->data = data;

    return element;
}

void push(Stack *stack, int data) {
    Element *new = createElement(data);
    if (stack->top == NULL) {
        stack->top = new;
        stack->size++;
        return;
    }

    new->previous = stack->top;
    stack->top = new;
    stack->size++;
}

// implementiere eine Funktion "pop" mit Rückgabewert int, welche die Daten des aktuellen Tops des Stacks ausgibt.
int pop(Stack *stack) {
    if (stack->top == NULL) {
        return -1;
    }
    int data = stack->top->data;
    Element *freeElement = stack->top;
    stack->top = freeElement->previous;
    free(freeElement);
    stack->size--;
    return data;
}

int peek(Stack *stack) {
    if (stack->top == NULL) {
        return -1;
    }
    int data = stack->top->data;
    return data;
}

bool isEmpty(Stack *stack) {
    return stack->top == NULL;
}
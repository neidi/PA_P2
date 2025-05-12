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
}

// implementiere eine Funktion "pop" mit Rückgabewert int, welche die Daten des aktuellen Tops des Stacks ausgibt.
int pop(Stack *stack) {
}

int peek(Stack *stack) {
}

bool isEmpty(Stack *stack) {
}
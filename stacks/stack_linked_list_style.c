#include <stdio.h>
#include <stdlib.h>

// implementiere eine Struct für ein Element eines Stacks
typedef struct element
{
    int data;
    struct element *previous;
} Element;

// implementiere den Stack selber, welcher auf das jetzige Element zeigt
typedef struct stack
{
    Element *top;
} Stack;

// implementiere eine Funktion, welche ein Element mit der angegebenen Ganzzahl kreiert
Element *create_element(int data)
{
    Element *element = malloc(sizeof(Element));
    element->previous = NULL;
    element->data = data;

    return element;
}

// implementiere eine Funktion, die ein Element auf den Stack legt.
void push(Stack *stack, int data)
{
    Element *new = create_element(data);
    if (stack->top == NULL)
    {
        stack->top = new;
        return;
    }

    new->previous = stack->top;
    stack->top = new;
}

// implementiere eine Funktion "pop" mit Rückgabewert int, welche die Daten des aktuellen Tops des Stacks ausgibt.
int pop(Stack *stack)
{
    int data = stack->top->data;
    Element *freeElement = stack->top;
    stack->top = freeElement->previous;
    free(freeElement);
    return data;
}

int peek(Stack *stack)
{
    int data = stack->top->data;
    return data;
}

int main()
{
    Stack *stack = malloc(sizeof(Stack));
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    printf("Current stack element (peeked): %d\n", peek(stack));
    printf("Current stack element: %d\n", pop(stack));
    printf("Current stack element (peeked): %d\n", peek(stack));
    printf("Current stack element: %d\n", pop(stack));
    printf("Current stack element (peeked): %d\n", peek(stack));
    printf("Current stack element: %d\n", pop(stack));

    return 0;
}
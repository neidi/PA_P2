#include <assert.h>
#include <stdbool.h>
#include <printf.h>
#include "stack_dynamic.h"

void testCasesDynamic(){
    Stack *stack = createStack();
    assert(peek(stack) == -1);
    assert(isEmpty(stack) == true);
    push(stack, 5);
    assert(stack->size == 1);
    assert(peek(stack) == 5);
    push(stack, 17);
    assert(stack->size == 2);
    assert(peek(stack) == 17);
    push(stack, 1);
    assert(stack->size == 3);

    assert(pop(stack) == 1);
    assert(peek(stack) == 17);
    assert(pop(stack) == 17);
    assert(peek(stack) == 5);
    assert(pop(stack) == 5);
    assert(peek(stack) == -1);
    assert(pop(stack) == -1);
    assert(isEmpty(stack) == true);

    printf("Congratulations! All test cases passed!\n");
}

int main(){
    testCasesDynamic();

    return 0;
}
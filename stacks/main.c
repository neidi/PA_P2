#include <assert.h>
#include <stdbool.h>
#include <printf.h>
#include "stack_fixed.h"

void testCasesFixed(){
    Stack *stack = createStack();
    assert(peek(stack) == -1);
    assert(push(stack, 5) == true);
    assert(peek(stack) == 5);
    assert(push(stack, 17) == true);
    assert(peek(stack) == 17);
    assert(push(stack, 1) == true);
    assert(peek(stack) == 1);
    assert(isFull(stack) == true);
    assert(isEmpty(stack) == false);
    assert(push(stack, 1) == false);
    assert(peek(stack) == 1);

    assert(pop(stack) == 1);
    assert(peek(stack) == 17);
    assert(pop(stack) == 17);
    assert(peek(stack) == 5);
    assert(pop(stack) == 5);
    assert(peek(stack) == -1);
    assert(pop(stack) == -1);
    assert(isEmpty(stack) == true);
    assert(isFull(stack) == false);

    printf("Congratulations! All test cases passed!\n");
}

int main(){
    testCasesFixed();

    return 0;
}
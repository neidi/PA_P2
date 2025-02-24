#include <stdio.h>
#include <assert.h>


void tests() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);
    assert(fibonacci(7) == 13);
    assert(fibonacci(30) == 832040);

    printf("Gratuliere, alle Tests sind grün!");
}

int main() {
    tests();

    return 0;
}

#include <stdio.h>
#include <assert.h>

int fibonacci(int index) {
    if (index == 0) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }

    return fibonacci(index - 1) + fibonacci(index - 2);
}

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

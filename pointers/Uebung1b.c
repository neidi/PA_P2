#include <assert.h>
#include <stdio.h>

// Deklarieren Sie die Funktion multiply

int multiply(int num1, int num2) {
    return num1 * num2;
}
// Deklarieren Sie die Funktion apply

int apply(int num1, int num2, int (*func)(int, int)) {
    return (*func)(num1, num2);
}

void tests() {
    int (*fcptr)(int, int) = &multiply;

    assert(apply(1, 2, fcptr) == 2);
    assert(apply(9, 3, fcptr) == 27);

    printf("Gratuliere, alle Tests sind grün!");
}

int main() {
    tests();

    return 0;
}

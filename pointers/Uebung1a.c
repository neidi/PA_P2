#include <stdio.h>
#include <assert.h>

/*
 * Schreiben Sie zwei Funktionen, die jeweils von zwei Integer-Werten die Summe (Funktion 1) oder das Produkt (Funktion 2)
 * ausgibt, indem Sie Zeiger verwenden.
 */

int add(int *summand1, int *summand2) {
    return 0;
}

void multiply(int *factor1, int *factor2) {
}

void tests() {
    int value1 = 10;
    int value2 = 26;
    // deklarieren Sie ptr1 und 2

    assert(add(ptr1, ptr2) == 36);
    assert(multiply(ptr1, ptr2) == 260);

    printf("Gratuliere, alle Tests sind grün!");
}

int main() {
    tests();

    return 0;
}

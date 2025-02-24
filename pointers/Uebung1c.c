#include <stdio.h>
#include <assert.h>

// Deklariere die beiden Funktionen
void changeValueByValue(int a) {
    a = 10;
}

void changeValueByReference(int *a) {
    *a = 10;
}

void tests() {
    int a = 4;
    changeValueByValue(a);
    assert(a == 4);

    int b = 4;
    changeValueByReference(&b);
    assert(b == 10);

    printf("Gratuliere, alle Tests sind grün!");
}

int main() {
    tests();

    return 0;
}

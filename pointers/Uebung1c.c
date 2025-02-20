#include <stdio.h>
#include <assert.h>

// Deklariere die beiden Funktionen

void tests() {
    int a = 4;
    changeValueByValue(a);
    assert(a == 4);

    int b = 4;
    changeValueByReference(b);
    assert(b == 10);
}

int main() {
    tests();

    return 0;
}

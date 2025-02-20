#include <assert.h>

// Deklarieren Sie die Funktion multiply

// Deklarieren Sie die Funktion apply

void tests() {
    assert(apply(1, 2, fcptr) == 2);
    assert(apply(9, 3, fcptr) == 27);
}

int main() {
    tests();

    return 0;
}

#include <stdio.h>
#include <assert.h>

// Ergänze die Funktion, sodass sie den Durchschnittswert des Arrays berechnet
double avg(int arr[], int size) {
    return (double) 1;
}

void tests() {
    int myArray[] = {1, 2, 3, 4, 5};
    assert(avg(myArray, 5) == 3);

    int anotherArray[] = {5, 13, 18, 4, 56, 102};
    assert(avg(anotherArray, 6) == 33);
}

int main() {
    tests();
    return 0;
}
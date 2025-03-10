#include <stdio.h>
#include <assert.h>

// Ergänze die Funktion, sodass sie den Durchschnittswert des Arrays berechnet
double avg(const int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return (double) sum/size;
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
#include <stdio.h>
#include <assert.h>

void indexPlusOneTests(int indexPlusOne[]) {
    assert(indexPlusOne[0] == 7);
    assert(indexPlusOne[1] == 5);
    assert(indexPlusOne[2] == 1);
    assert(indexPlusOne[3] == 8);
    assert(indexPlusOne[4] == 10);
}

void fibonacciTests(int fibonacci[]) {
    assert(fibonacci[0] == 1);
    assert(fibonacci[1] == 1);
    assert(fibonacci[2] == 2);
    assert(fibonacci[3] == 3);
    assert(fibonacci[4] == 5);
    assert(fibonacci[5] == 8);
    assert(fibonacci[6] == 13);
    assert(fibonacci[7] == 21);
}

void costTests(double cost[]) {
    assert(cost[0] == 1.1);
    assert(cost[1] == 1.7);
    assert(cost[2] == 2.5);
    assert(cost[3] == 3.7);
    assert(cost[4] == 5.5);
}

void valuesTests(float values[]) {
    assert(values[0] == 6.1f);
    assert(values[1] == 3.9f);
    assert(values[2] == 9.0f);
    assert(values[3] == 8.1f);
    assert(values[4] == 10.105f);
}

int main() {
    // Initialisiere das folgende Array mit den geforderten Werten (siehe Tests)
    int indexPlusOne[5] = {7, 5, 1, 8, 10};
    indexPlusOneTests(indexPlusOne);

    // Ergänze das folgende Array mit teilweiser Initialisierung, fülle die fehlenden Werte mit 13 und 21
    int fibonacci[8] = {1, 1, 2, 3, 5, 8};
    fibonacci[6] = 13;
    fibonacci[7] = 21;
    fibonacciTests(fibonacci);

    // Initialisiere das folgende Array per while-Schleife
    double cost[5];
    int i = 0;
    while (i < 5) {
        if (i == 0) {
            cost[i] = 1.1;
        } else if (i == 1) {
            cost[i] = 1.7;
        } else if (i == 2) {
            cost[i] = 2.5;
        } else if (i == 3) {
            cost[i] = 3.7;
        } else if (i == 4) {
            cost[i] = 5.5;
        }
        i++;
    }

    costTests(cost);

    // Initialisiere das folgende Array per for-Schleife
    float values[5];

    for (int y = 0; y < 5; y++) {
        if (y == 0) { values[y] = 6.1f; }
        if (y == 1) { values[y] = 3.9f; }
        if (y == 2) { values[y] = 9.0f; }
        if (y == 3) { values[y] = 8.1f; }
        if (y == 4) { values[y] = 10.105f; }
    }

    valuesTests(values);

    return 0;
}
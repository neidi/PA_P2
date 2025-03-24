#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */

const int NO_KEY = -1;

int linearSearch(int array[], int size, int key) {
    // TODO: Linearen Sortieralgorithmus entwickeln

    return NO_KEY;
}

void testCases() {
    int array[] = {1, 6, 3, 8, 7, 9, 99, 37, 17};
    int size = sizeof(array) / sizeof(array[0]);
    assert(linearSearch(array, size, 3) == 2);
    assert(linearSearch(array, size, 7) == 4);
    assert(linearSearch(array, size, 17) == 8);
    assert(linearSearch(array, size, 18) == NO_KEY);

    int second[] = {};
    assert(linearSearch(second, 0, 18) == NO_KEY);
    assert(linearSearch(second, -1, 73) == NO_KEY);

    printf(GREEN "tests passed, great job!" RESET);
}

int main() {
    testCases();

    return 0;
}

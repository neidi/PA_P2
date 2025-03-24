#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void testCases() {
    int array[] = {3, 6, 1, 5, 5, 7, 2, 9};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, size);
    assert(array[0] == 1);
    assert(array[1] == 2);
    assert(array[2] == 3);
    assert(array[3] == 5);
    assert(array[4] == 5);
    assert(array[5] == 6);
    assert(array[6] == 7);
    assert(array[7] == 9);

    printf(GREEN "tests passed, great job!" RESET);
}

int main() {
    testCases();

    return 0;
}
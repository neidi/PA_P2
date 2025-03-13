#include <stdio.h>
#include <assert.h>

// Ergänze die Funktion, sodass sie das Minimum des Arrays berechnet
int minimum(int arr[], int size)
{
    return 0;
}

// Ergänze die Funktion, sodass sie das Maximum des Arrays berechnet
int maximum(int arr[], int size)
{
    return 0;
}

void tests()
{
    int myArray[] = {1, 2, 3, 4, 5};
    assert(minimum(myArray, 5) == 1);
    assert(maximum(myArray, 5) == 5);

    int anotherArray[] = {5, 2, 18, 102, 56, 4};
    assert(minimum(anotherArray, 5) == 2);
    assert(maximum(anotherArray, 5) == 102);
}
int main()
{
    tests();
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int min = minimum(myArray, arraySize);
    double max = maximum(myArray, arraySize);

    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f", max);
    return 0;
}
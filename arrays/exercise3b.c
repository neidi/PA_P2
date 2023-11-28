#include <stdio.h>

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

int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int min = minimum(myArray, arraySize);
    double max = maximum(myArray, arraySize);

    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f", max);
    return 0;
}
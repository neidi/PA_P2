#include <stdio.h>

// Ergänze die Funktion, sodass sie den Durchschnittswert des Arrays berechnet
double min(int arr[], int size)
{
    return (double)1;
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    double avg = min(myArray, arraySize);

    printf("Durchschnitt: %.2f", avg);
    return 0;
}
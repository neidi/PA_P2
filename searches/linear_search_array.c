#include <stdio.h>

int linearSearch(int array[], int size, int target)
{

    return -1; // Ziel nicht gefunden, -1 zurückgeben
}

int main()
{
    int array[] = {1, 6, 3, 8, 7, 9, 99, 37, 17};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 8;

    int result = linearSearch(array, size, target);

    if (result != -1)
    {
        printf("Zahl %d gefunden an Index %d\n", target, result);
    }
    else
    {
        printf("Zahl %d nicht gefunden\n", target);
    }

    return 0;
}
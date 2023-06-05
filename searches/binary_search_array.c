#include <stdio.h>

int binarySearch(int array[], int low, int high, int target)
{
}

int main()
{
    int array[] = {1, 3, 6, 7, 8, 9, 17, 37, 99};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 9;

    int result = binarySearch(array, 0, size - 1, target);

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
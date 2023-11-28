#include <stdio.h>

int main()
{
    // Initialisiere das folgende Array mit kompletter Initialisierung mit Werten deiner Wahl
    int indexPlusOne[5] = {1, 2, 3, 4, 5};

    // Ergänze das folgende Array mit teilweiser Initialisierung, fülle die fehlenden Werte mit 13 und 21
    int fibonacci[8] = {1, 1, 2, 3, 5, 8};
    fibonacci[6] = 13;
    fibonacci[7] = 21;

    // Initialisiere das folgende Array per while-Schleife
    double cost[5];
    int i = 0;
    while (i < 5)
    {
        cost[i] = i;
        i++;
    }

    // Initialisiere das folgende Array per for-Schleife
    float values[5];
    for (int i = 0; i < 5; i++)
    {
        values[i] = i;
    }

    return 0;
}

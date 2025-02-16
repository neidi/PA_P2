#include <stdio.h>
#include <assert.h>

/**
 * Schreibe eine Funktion "add", die zwei Zahlen miteinander addiert und das Resultat zurückgibt.
*/


/**
 * Schreibe eine Funktion "apply", die zwei Zahlen und einen Zeiger auf eine Funktion mit zwei Zahlen
 * entgegennimmt und die Funktion mit den zwei Zahlen aufruft und das Resultat zurückgibt.
*/


void tests() {
    assert(add(1, 2) == 3);
    assert(add(100, 3) == 103);
    assert(add(2147483647, 2147483647) == 4294967294L);
    assert(apply(1, 2, add) == 3);
    assert(apply(100, 3, add) == 103);
    assert(apply(2147483647, 2147483647, add) == 4294967294L);
}

/**
 * Schreibe eine Funktion "main", die einen Pointer auf die Funktion "add" definiert und danach die Funktion
 * "apply" mit zwei Zahlen und dem vorher definierten Pointer aufruft und das Resultat in einer Variable
 * namens "result" speichert.
 * Rufe danach die folgende Funktion auf, um den Wert auszugeben:
 * printf("Ergebnis = %d\n", result);
*/
int main() {
    tests();

    printf("Gratuliere, alle Uebungen wurden erfolgreich bearbeitet!");
    return 0;
}

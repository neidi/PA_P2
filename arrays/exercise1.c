#include <stdio.h>

int main()
{
    char *bookTitles[] = {
        "Der kleine Prinz",
        "Harry Potter und der Stein der Weisen",
        "To Kill a Mockingbird",
        "1984",
        "Das Parfum"};

    // gib alle Buchtitel aus (printf("%s\n", <<wert>>))
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", bookTitles[i]);
    }
    printf("\n\n\n");
    // Ändere den Wert "Harry Potter und der Stein der Weisen" im Array auf
    // "Harry Potter und die Kammer des Schreckens" und gib nochmals alle Werte des Arrays aus.

    bookTitles[1] = "Die Kammer des Schreckens";
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", bookTitles[i]);
    }    return 0;
}
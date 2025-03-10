#include <stdio.h>
#include <assert.h>

int run = 0;

void tests(char *bookTitles[]) {
    assert(bookTitles[0] == "Der kleine Prinz");
    if (run == 0) {
        assert(bookTitles[1] == "Harry Potter und der Stein der Weisen");
    } else {
        assert(bookTitles[1] == "Harry Potter und die Kammer des Schreckens");
    }
    assert(bookTitles[2] == "To Kill a Mockingbird");
    assert(bookTitles[3] == "1984");
    assert(bookTitles[4] == "Das Parfum");
    run++;
}

int main() {
    char *bookTitles[] = {"Der kleine Prinz",
                          "Harry Potter und der Stein der Weisen",
                          "To Kill a Mockingbird",
                          "1984",
                          "Das Parfum"};


    tests(bookTitles);

    // Ändere den Wert "Harry Potter und der Stein der Weisen" im Array auf
    // "Harry Potter und die Kammer des Schreckens" und führe nochmals die Tests aus.
    bookTitles[1] = "Harry Potter und die Kammer des Schreckens";
    tests(bookTitles);

    return 0;
}
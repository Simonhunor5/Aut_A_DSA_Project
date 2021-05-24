#include <stdio.h>
#include "Book/Book.h"


int main() {

    Book* book1 = createBook("Hunor", "Simon");
    printBook(book1);

    return 0;
}

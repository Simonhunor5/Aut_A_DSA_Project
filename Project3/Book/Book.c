//
// Created by Huni on 5/24/2021.
//

#include "Book.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Book* createBook(char* title, char* author)
{
    Book* book = (Book*)malloc(sizeof(Book));

    if(!book)
    {
        printf("Error!");
        return NULL;
    }

    strcpy(book->title, title);
    strcpy(book->author, author);

    return book;
}

void printBook(Book* book)
{
    printf("%s By %s", book->title, book->author);
}


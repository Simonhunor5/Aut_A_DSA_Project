//
// Created by Huni on 5/24/2021.
//

#ifndef PROJECT3_BOOK_H
#define PROJECT3_BOOK_H

typedef struct {
    char title[40];
    char author[40];
}Book;


Book* createBook(char* title, char* author);

void printBook(Book* book);

#endif //PROJECT3_BOOK_H

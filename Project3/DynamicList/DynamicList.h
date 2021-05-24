//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_DYNAMICLIST_H
#define PROJECT3_DYNAMICLIST_H

#include "../Book/Book.h"

typedef struct{
    struct Node *next;
    Book *data;
} Node;


Node *create();

void readFromFile(Node **List, char *fileName);

void insert(Node **front, Book* data);

char* searchByTitle(Node* List, char* title);

char* searchByAuthor(Node* List, char* author);


#endif //PROJECT3_DYNAMICLIST_H

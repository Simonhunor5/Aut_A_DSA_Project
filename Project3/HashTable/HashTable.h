//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_HASHTABLE_H
#define PROJECT3_HASHTABLE_H

#include "../Book/Book.h"

typedef struct {
    int key;
    Book* value;
}HashTable;

HashTable *create(int m);

void toUpper(char *title);

int stringToInt(char *title);

int search(char *title, HashTable *t, int m);

void insert(char *title,HashTable *T, int m);

void delete(char *title, HashTable *t, int m);

#endif
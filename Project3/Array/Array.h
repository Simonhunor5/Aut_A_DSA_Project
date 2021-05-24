//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_ARRAY_H
#define PROJECT3_ARRAY_H

#include "../Book/Book.h"

typedef struct {
    int size;
    Book* elements;
} IntArray;

IntArray *createArray(int dimension);

Book* findElement(IntArray *array, Book* element);

void readArray(const char *fileName, IntArray **array);

void printArray(IntArray *array);

void sortArray(IntArray *array);

int cmp(const void *a, const void *b);

void binarySearch(IntArray *array, Book* element);

#endif //PROJECT3_ARRAY_H

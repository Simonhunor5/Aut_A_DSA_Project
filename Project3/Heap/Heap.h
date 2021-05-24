//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_HEAP_H
#define PROJECT3_HEAP_H

#include "../Book/Book.h"

typedef struct {
    int maxSize;
    int size;
    Book* data;
}Heap;

Heap *createHeap(int max);
Heap* readFromFile(char* fileName);
void insert(Heap *h, Book* book);
void up(Heap* h, int i);
int findElement(Heap* heap, char* title);

#endif //PROJECT3_HEAP_H

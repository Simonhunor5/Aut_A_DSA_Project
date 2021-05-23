//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_HEAP_H
#define PROJECT3_HEAP_H
typedef struct{
    
} euro;
typedef struct{
    
} Heap;
Heap *createHeap(int max);

void insert(Heap *h, int year, int month, int price);

void up(Heap *h, int i);

void down(Heap *h, int i);

void kupacrendez(Heap *h, int N);

int torolmax(Heap *h);

#endif //PROJECT3_HEAP_H

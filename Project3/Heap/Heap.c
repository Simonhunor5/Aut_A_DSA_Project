//
// Created by Antal József on 2021. 05. 23..
//

#include "Heap.h"
#include <stdio.h>
#include <stdlib.h>

Heap *createHeap(int max) {
    Heap* h = (Heap*)malloc(sizeof(Heap));
    h->size = 0;
    h->maxSize = max;
    h->data = (int*)malloc(max * sizeof(int));
    return h;
}
void insert(heap* h, int year, int month, int price) {
    h->size++;
    h->data[h->euro1->year] = year;
    h->data[h->euro1->month] = month;
    h->data[h->euro1->price] = price;
    up(h, h->size);
}
void up(heap* h, int i) {
    int seged;
    while ((i > 1) && (h->data[i/2]->euro1->price < h->data[i].price)) {
        seged = h->data[i/2].year;
        h->data[i/2] = h->data[i].year;
        h->data[i].month = seged;
        i /= 2;
    }
}


Heap* readFromFile(char* fileName) {
    FILE* fin = fopen(fileName, "rt");

    if(!fin) {
        printf("Failed to open file %s.", fileName);
        return NULL;
    }

    int n;
    fscanf(fin, "%i", &n);

    Heap* heap = createHeap(n);

    if(!heap) {
        return NULL;
    }

    for(int i = 0; i < n; i++) {
        int year, month;

        fscanf(fin, "%i", &year);
        fscanf(fin, "%i", &month);

        int exchangeRate;
        fscanf(fin, "%i", &exchangeRate);

        int penny = exchangeRate % 100;
        exchangeRate /= 100;
        int forint = exchangeRate;

        Exchange* tmp = createExchange(year, month, forint, penny);

        insert(heap, tmp);
    }

    fclose(fin);
    fin = NULL;

    return heap;
}
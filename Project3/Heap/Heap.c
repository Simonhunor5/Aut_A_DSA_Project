//
// Created by Antal József on 2021. 05. 23..
//

#include "Heap.h"
#include <stdio.h>
#include <stdlib.h>
#include <vss.h>
#include <string.h>
#include "../Book/Book.h"

Heap *createHeap(int max) {
    Heap *h = (Heap *) malloc(sizeof(Heap));

    if(!h)
    {
        printf("Error!");
        return NULL;
    }

    h->size = 0;
    h->maxSize = max;
    h->data = (Book *) malloc(h->maxSize * sizeof(Book));

    if(!h->data)
    {
        printf("Error!");
        return NULL;
    }

    return h;
}

void insert(Heap *h, Book *book) {
    h->size++;
    strcpy(h->data[h->size].author, book->author);
    strcpy(h->data[h->size].title, book->title);

    up(h, h->size);
}

Heap *readFromFile(char *fileName) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Failed to open file %s.", fileName);
        return NULL;
    }

    int n;
    fscanf(fin, "%i", &n);

    Heap *heap = createHeap(n);

    if (!heap) {
        return NULL;
    }

    char* title, author;

    for (int i = 0; i < heap->maxSize; i++) {

        fscanf(fin, "%s", title);
        fscanf(fin, "%s", author);

        insert(heap, createBook(title,author));
    }

    fclose(fin);
    fin = NULL;

    return heap;
}

void up(Heap *h, int i) {
    char* seged;

    while ((i > 1) && strcmp(h->data[i / 2].title, h->data[i].title) > 0) {
        strcpy(seged, h->data[i / 2].author);
        strcpy(h->data[i / 2].author, h->data[i].author);
        strcpy(h->data[i].author, seged);
        i /= 2;
    }
}

int findElement(Heap* heap, char* title)
{
    for (int i = 0; i < heap->size; ++i) {
        if(heap->data[i].title == title)
            return i;
    }
}
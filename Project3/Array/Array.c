//
// Created by Antal József on 2021. 05. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

IntArray *createArray(int dimension) {
    IntArray *array = (IntArray *) malloc(sizeof(dimension));

    if (!array) {
        printf("Hiba1!");
        return NULL;
    }

    array->size = dimension;
    array->elements = (Book *) malloc(dimension * sizeof(Book));

    if (!array->elements) {
        printf("Hiba2");
        free(array);
        return NULL;
    }

    return array;
}

int findElement(IntArray *array, Book* element) {
    for (int i = 0; i < array->size; i++)
        if (array->elements[i].author == element->author && array->elements[i].title == element->title)
            return i;

    return -1;
}


void readArray(const char *fileName, IntArray **array) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba3! (%s)", fileName);
        return;
    }

    int n;
    fscanf(fin, "%i", &n);
    IntArray *temps = createArray(n);

    if (!temps) {
        fclose(fin);
        return;
    }

    for (int i = 0; i < temps->size; i++) {
        fscanf(fin, "%s", temps->elements[i].title);
        fscanf(fin, "%s", temps->elements[i].author);
    }
    (*array) = temps;
    fclose(fin);
}

void printArray(IntArray *array) {
    for (int i = 0; i < array->size; i++)
        printBook(&array->elements[i]);
    printf("\n");
}
void sortArray(IntArray *array) {

    qsort(array->elements, array->size, sizeof(Book*), cmp);
}
void binarySearch(IntArray *array, Book* element) {
    Book* item = (Book*) bsearch(&element,array->elements, array->size, sizeof(Book), cmp);
    if( item != NULL ) {
        printf("Found item = %d\n", *item);
    } else {
        printf("Item = %d could not be found\n", *item);
    }
}

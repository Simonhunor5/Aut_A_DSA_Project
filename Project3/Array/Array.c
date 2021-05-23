//
// Created by Antal József on 2021. 05. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"

int seged(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

IntArray *createArray(int dimension) {
    IntArray *array = (IntArray *) malloc(sizeof(dimension));

    if (!array) {
        printf("Hiba1!");
        return NULL;
    }

    array->size = dimension;
    array->elements = (int *) malloc(dimension * sizeof(int));

    if (!array->elements) {
        printf("Hiba2");
        free(array);
        return NULL;
    }

    return array;
}

int findElement(IntArray *array, int element) {
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] == element)
            return i;

    return -1;
}

int minimum(IntArray *array) {
    int min = array->elements[0];
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] < min)
            min = array->elements[i];
    return min;
}

int maximum(IntArray *array) {
    int max = array->elements[0];
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] > max)
            max = array->elements[i];
    return max;
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
        fscanf(fin, "%i", &temps->elements[i]);
    }
    (*array) = temps;
    fclose(fin);
}

void fillArray(IntArray *array, int dimension, int first, int last) {
    srand(time(NULL));

    for (int i = 0; i < dimension; i++)
        array->elements[i] = (rand() % last + 1) + first;
}

void printArray(IntArray *array) {
    for (int i = 0; i < array->size; i++)
        printf("%i ", array->elements[i]);
    printf("\n");
}

void printArrayToFile(const char *fileName, IntArray *array) {
    FILE *fout = fopen(fileName, "wt");

    if (!fout) {
        printf("Hiba4!");
        return;
    }

    fprintf(fout, "%i\n", array->size);
    for (int i = 0; i < array->size; i++)
        fprintf(fout, "%i ", array->elements[i]);
}

void sortArray(IntArray *array) {

    qsort(array->elements, array->size, sizeof(int), seged);
    for (int i = 0; i < array->size; i++) {
        printf("%i ", array->elements[i]);
    }
}

void deleteElement(IntArray *array, int element) {
    int index = findElement(array, element);

    if (index == -1)
        return;

    for (int i = index; i < array->size - 1; i++)
        array->elements[i] = array->elements[i + 1];

    array->elements[array->size - 1] = 0;
    array->size--;
}

void copy(IntArray *arrayTo, IntArray *arrayFrom) {
    if (!arrayFrom || arrayTo->size > arrayFrom->size)
        return;
    arrayTo->elements = (int *) malloc(arrayTo->size * sizeof(int));
    for (int i = 0; i < arrayTo->size; i++)
        arrayTo->elements[i] = arrayFrom->elements[i];
}

int linearSearch(IntArray *array, int element) {
    for (int i = 0; i < array->size; i++) {
        if (array->elements[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(IntArray *array, int start, int end, int element) {
    start = 0;
    end = array->size - 1;
    int middle = (start + end) / 2;

    while (start <= end) {
        if (array->elements[middle] < element)
            start = middle + 1;
        else if (array->elements[middle] == element) {
            return middle;
            break;
        } else
            end = middle - 1;

        middle = (start + end) / 2;
    }
    if (start > end)
        return -1;

}

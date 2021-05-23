//
// Created by Antal József on 2021. 05. 23..
//
#include <stdio.h>
#include <stdlib.h>
#include "HashTable.h"

int *create(int m) {
    int *table = (int*)malloc(m * sizeof(int));
    if (!table) {
        printf("Hiba!\n");
        return NULL;
    }
    for(int i=0; i<m; i++){
        table[i] = -1;
    }
    return table;
}

void beszur(int k, int *T, int m) // k kulcsu elemet beszur
{
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j] == -1) {
            T[j] = k;
            return;
        } else i++;
    } while (i != m);
    printf("Tulcsodulas!\n");
    return;
}

int keres(int k, int *T, int m) //k kulcsu elemet keres
{
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j] == k)
            return j; // visszaadja a megtalalt elem indexet
        else i++;
    } while ((T[j] != -1) && (i != m));
    return -1; // ha nincs benne a keresett elem
}

void torol(int k, int *T, int m) //k kulcsu elemet töröljük
{
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j] == k) {
            T[j] = -1;
            break;
        } else i++;
    } while ((T[j] != -1) && (i != m));
    if (i == m) printf("Hianyzo elem!\n");
}
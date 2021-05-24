//
// Created by Antal József on 2021. 05. 23..
//
#include <stdio.h>
#include <stdlib.h>
#include "HashTable.h"
#include "string.h"

HashTable *create(int m) {
    HashTable *table = (HashTable *)malloc(m * sizeof(HashTable));
    if (!table) {
        printf("Hiba!\n");
        return NULL;
    }

    for(int i = 0; i < m ; i++)
    {
        table[i].key = -1;
        table[i].value = (Book*)malloc(sizeof(Book));
    }

    return table;
}

void toUpper(char *title) {
    for (int i = 0; i < strlen(title); i++)
        if (title[i] >= 'a' && title[i] <= 'z')
            title[i] -= 32;
}

int stringToInt(char *title) {
    int sum_t = 0;
    char tmp_t[30];

    strcpy(tmp_t, title);

    toUpper(tmp_t);

    for (int i = 0; i < strlen(tmp_t); i++) {
        int n = ((int) tmp_t[i]) - 64;
        sum_t += n * n;
    }

    return sum_t;
}


void insert(char *title, HashTable *T, int m) {
    int hasitott = stringToInt(title);
    int j, i = 0;
    do {
        j = (hasitott + i) % m;
        if (T[j].key == -1) {
            T[j].key = hasitott;
            return;
        } else i++;
    } while (i != m);
    printf("Tulcsodulas!\n");
    return;
}

int search(char *title, HashTable *T, int m) {
    int k = stringToInt(title);
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j].key == k)
            return j; // visszaadja a megtalalt elem indexet
        else i++;
    } while ((T[j].key != -1) && (i != m));
    return -1; // ha nincs benne a keresett elem
}

void delete(char *title, HashTable *T, int m) {
    int k = stringToInt(title);
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j].key == k) {
            T[j].key = -1;
            break;
        } else i++;
    } while ((T[j].key != -1) && (i != m));
    if (i == m) printf("Hianyzo elem!\n");
}
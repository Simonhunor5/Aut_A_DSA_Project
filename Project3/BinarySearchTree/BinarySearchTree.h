//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_BINARYSEARCHTREE_H
#define PROJECT3_BINARYSEARCHTREE_H

#include "../Book/Book.h"

typedef struct {
    struct Root *left;
    struct Root *right;
    Book *data;
} Root;

Root *create(char *a, char *t);

void insert(Root **tree, char *a, char *t);

void inorder(Root *tree);

#endif //PROJECT3_BINARYSEARCHTREE_H

//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_BINARYSEARCHTREE_H
#define PROJECT3_BINARYSEARCHTREE_H

typedef struct {
    int data;
    struct Root *left;
    struct Root *right;
} Root;

Root *create(int a);

void insert(Root **tree, int a);

void inorder(Root *tree);

void preorder(Root *tree);

void postorder(Root *tree);

#endif //PROJECT3_BINARYSEARCHTREE_H

//
// Created by Antal József on 2021. 05. 23..
//
#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"

Root *create(int a) {

    Root *branch = (Root *) (malloc(sizeof(Root)));

    if (!branch) {
        printf("Sikertelen lefoglalas");
        return 0;
    }

    branch->data = a;
    branch->right = NULL;
    branch->left= NULL;

    return branch;
}

void insert(Root **fa, int a) {
    if ((*fa) == NULL) {
        (*fa) = create(a);
    } else {
        if ((*fa)->data > a)
            insert(&((*fa)->left), a);
        else
            insert(&((*fa)->right), a);
    }
}

void inorder(Root *fa) {
    if (fa->left)
        inorder(fa->left);

    printf("%3d ", fa->data);

    if (fa->right)
        inorder(fa->right);
}

void preorder(Root *fa) {
    printf("%3d ", fa->data);
    if (fa->left)
        preorder(fa->left);
    if (fa->right)
        preorder(fa->right);
}

void postorder(Root *fa) {
    if (fa->left)
        postorder(fa->left);
    if (fa->right)
        postorder(fa->right);
    printf("%3d ", fa->data);
}
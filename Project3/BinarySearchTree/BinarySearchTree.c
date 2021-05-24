//
// Created by Antal József on 2021. 05. 23..
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BinarySearchTree.h"

Root *create(char *a, char *t) {

    Root *branch = (Root *) (malloc(sizeof(Root)));

    if (!branch) {
        printf("Error");
        return NULL;
    }

    strcpy(branch->data->author, a);
    strcpy(branch->data->title, t);
    branch->right = NULL;
    branch->left = NULL;

    return branch;
}

void insert(Root **fa, char *a, char *t) {

    if ((*fa) == NULL) {
        (*fa) = create(a, t);
    } else {
        if (strcmp((*fa)->data->title, t) < 0)
            insert(&((*fa)->left), a, t);
        else
            insert(&((*fa)->right), a, t);
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
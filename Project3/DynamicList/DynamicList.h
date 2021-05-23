//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_DYNAMICLIST_H
#define PROJECT3_DYNAMICLIST_H

typedef struct{
    struct Node *next;
    struct Node *data;
} Node;


Node *create();

void readFromFile(Node **uppercase, Node **lowercase, char *fileName);

void insert(Node **front, char data, int index);

void traverse(Node *front);

#endif //PROJECT3_DYNAMICLIST_H

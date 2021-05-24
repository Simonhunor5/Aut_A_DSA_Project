//
// Created by Antal József on 2021. 05. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include "DynamicList.h"
#include "string.h"

Node *create() {
    Node *newNode = (Node *) malloc(sizeof(Node));

   if (!newNode) {
        printf("Error while allocationg newNode!");
       return NULL;
   }

    newNode->next = NULL;
    newNode->data = NULL;

    return newNode;
}

void readFromFile(Node **List, char *fileName) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Failed to open file: %s", fileName);

        return ;
    }

    int n;

    fscanf(fin, "%i", &n);

    char* title;
    char* author;


   for(int i = 0; i < n; i++)
   {
       fscanf(fin, "%s ", title);
       fscanf(fin, "%s ", author);
       insert((*List), createBook(title, author));
   }

}

void insert(Node **front, Book* data) {
    Node *newNode = create();
    newNode->data = data;

    if (front == NULL ) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;

        int i = 1;
      while (p->next != NULL) {
            p = (Node *) p->next;
            i++;
       }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}

char* searchByTitle(Node* List, char* title)
{
    while(List != NULL && strcmp(List->data->title, title))
    {
        List = List->next;
    }

    if(List == NULL)
    {
        return NULL;
    }

    return List->data->title;
}

char* searchByAuthor(Node* List, char* author)
{
    while(List != NULL && strcmp(List->data->author, author))
    {
        List = List->next;
    }

    if(List == NULL)
    {
        return NULL;
    }

    return List->data->author;
}
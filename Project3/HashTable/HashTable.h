//
// Created by Antal József on 2021. 05. 23..
//

#ifndef PROJECT3_HASHTABLE_H
#define PROJECT3_HASHTABLE_H
typedef struct {
    char *key;
    int value;
};

int *create(int m);

int keres(int k, int *t, int m);
//az k elem pozícióját adja vissza az m elemű t tömbben

void beszur(int k, int *t, int m);
// k kulcsú elemet beszúr a t tömbbe, melynek m eleme van

void torol(int k, int *t, int m);
//a k kitörlése a t tömbből, melynek m eleme van
#endif //PROJECT3_HASHTABLE_H

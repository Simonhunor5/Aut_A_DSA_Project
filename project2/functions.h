//
// Created by Tibor on 2021. 05. 09..
//

#ifndef PROJECT2_FUNCTIONS_H
#define PROJECT2_FUNCTIONS_H

#include <string.h>
#include <stdbool.h>

typedef struct train {
    char ID[7];
    int passanger_count;
    int year;
    int month;
    int day;
    int hour;
    int minutes;
} train;

typedef struct root {
    train *adat;
    struct root *bal;
    struct root *jobb;
} root;

root *create_root(train *train1);

void insert(root **fa, train *train1);

void inorder(root *fa);

train *create_train();

bool compare(int year1, int month1, int day1, int hour1, int minutes1,
             int year2, int month2, int day2, int hour2, int minutes2);

int to_minutes(int year, int month, int day, int hour, int minutes);

train *max_value(root *fa);

void read_from_file(root* fa, char* file_name);

#endif //PROJECT2_FUNCTIONS_H

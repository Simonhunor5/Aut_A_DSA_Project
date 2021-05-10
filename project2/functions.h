//
// Created by Tibor on 2021. 05. 09..
//

#ifndef PROJECT2_FUNCTIONS_H
#define PROJECT2_FUNCTIONS_H

#include <string.h>
#include <stdbool.h>
#include "enums.h"

typedef struct{
    int year;
    int month;
    int day;
    int hour;
    int minutes;
} Time;

typedef struct{
    char* ID;
    char* startLocation;
    char* arriveLocation;
    int numberOfPassangers;
    int numberOfCarrige;
    Time arriveTime;
    Time startTime;
    int travelTime;
    enum TrainType type;
    int weight;
} Train;

typedef struct {
    Train *data;
    struct Root *left;
    struct Root *right;
} Root;

Root *create_root(Train *train);

void insert(Root **Tree, Train *train);

void inorder(Root* tree);

Train *create_train();

bool compare(Time time1, Time time2);

int to_minutes(Time time);

Train *max_value(Root *tree);

void read_from_file(Root* tree, char* file_name);


#endif //PROJECT2_FUNCTIONS_H

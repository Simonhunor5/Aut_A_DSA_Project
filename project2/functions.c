//
// Created by Tibor on 2021. 05. 09..
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

Root *create_root(Train *train1) {

    Root *branch = (Root *) (malloc(sizeof(Root)));

    if (!branch) {
        printf("Error");
        return 0;
    }

    branch->data = train1;
    branch->right = NULL;
    branch->left = NULL;

    return branch;
}

void insert(Root **tree, Train *train) {
    if (*tree == NULL) {
        *tree = create_root(train);
    } else {
        Train *max_train = max_value(*tree);

        if (train->travelTime < 60) {
            insert(&((*tree)->left), train);
            printf("Left ");
        } else {
            insert(&((*tree)->right), train);
            printf("Right ");
        }
        printf("\n");

    }
}

void inorder(Root *tree) {
    if (tree->right)
        inorder(tree->right);

    printf("ID: %s\n", tree->data->ID);
    printf("\tPassanger count: %i\n", tree->data->numberOfPassangers);
    printf("\tTravel time: %i minutes \n",tree->data->travelTime);

    if (tree->right)
        inorder(tree->right);
}

Train *create_train() {
    Train *train = (Train *) (malloc(sizeof(Train)));

    if (!train) {
        printf("Error");
        return 0;
    }

    return train;
}

bool compare(Time time1, Time time2) {

    if (time1.year > time2.year) {
        return true;

    } else if (time1.year < time2.year) {
        return false;

    } else {
        if (time1.month> time2.month) {
            return true;

        } else if (time1.month < time2.month) {
            return false;

        } else {
            if (time1.day > time2.day) {
                return true;

            } else if (time1.day < time2.day) {
                return false;

            } else {
                if (time1.hour > time2.hour) {
                    return true;

                } else if (time1.hour < time2.hour) {
                    return false;

                } else {
                    if (time1.minutes > time2.minutes) {
                        return true;

                    } else {
                        return false;

                    }
                }
            }
        }
    }
}

int to_minutes(Time time) {
    int sum = 0;

    sum += time.minutes;
    sum += time.hour * 60;
    sum += time.day * 24 * 60;

    if (time.month == 1 ||
        time.month == 3 ||
        time.month == 5 ||
        time.month == 7 ||
        time.month == 8 ||
        time.month == 10 ||
        time.month == 12) {

        sum += time.month * 31 * 24 * 60;
        sum += time.year * 12 * 31 * 24 * 60;

    } else if (time.month == 4 ||
                time.month == 6 ||
                time.month == 9 ||
                time.month == 11) {

        sum += time.month * 30 * 24 * 60;
        sum += time.year * 12 * 30 * 24 * 60;

    } else if (time.month == 2) {

        sum += time.month * 28 * 24 * 60;
        sum += time.year * 12 * 28 * 24 * 60;

    }

    return sum;
}

Train *max_value(Root *tree) {
    if (tree->right)
        return max_value(tree->right);

    return tree->data;
}

void read_from_file(Root *tree, char *file_name) {
    FILE *file = fopen(file_name, "rt");
    if (!file) {
        printf("Error!");
        return;
    }
    int n;
    fscanf(file, "%i", &n);

    for (int i = 0; i < n; i++) {
        Train *train = create_train();
        Time time;

        fscanf(file, "%s", train->ID);
        fscanf(file, "%i", &train->numberOfPassangers);
        fscanf(file, "%i", &train->numberOfCarrige);
        fscanf(file, "%s", train->startLocation);
        fscanf(file, "%s", train->arriveLocation);
        fscanf(file, "%i", &time.year);
        fscanf(file, "%i", &time.month);
        fscanf(file, "%i", &time.day);
        fscanf(file, "%i", &time.hour);
        fscanf(file, "%i", &time.minutes);
        train->startTime = time;
        fscanf(file, "%i", &time.year);
        fscanf(file, "%i", &time.month);
        fscanf(file, "%i", &time.day);
        fscanf(file, "%i", &time.hour);
        fscanf(file, "%i", &time.minutes);
        train->arriveTime = time;
        fscanf(file, "%i", &train->type);
        train->travelTime = to_minutes(train->startTime) - to_minutes(train->arriveTime);
        if(train->type == 1)
        {
            fscanf(file, "%i", train->weight);
        }


        insert(&tree, train);
    }
}
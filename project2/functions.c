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
        train *max_train = max_value(*tree);

        int sum1 = to_minutes(max_train->year,
                              max_train->month,
                              max_train->day,
                              max_train->hour,
                              max_train->minutes);

        int sum2 = to_minutes(train1->year,
                              train1->month,
                              train1->day,
                              train1->hour,
                              train1->minutes);

        if (abs(sum1 - sum2) < 10) {
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

int to_minutes(int year, int month, int day, int hour, int minutes) {
    int sum = 0;

    sum += minutes;
    sum += hour * 60;
    sum += day * 24 * 60;

    if (month == 1 ||
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12) {

        sum += month * 31 * 24 * 60;
        sum += year * 12 * 31 * 24 * 60;

    } else if (month == 4 ||
               month == 6 ||
               month == 9 ||
               month == 11) {

        sum += month * 30 * 24 * 60;
        sum += year * 12 * 30 * 24 * 60;

    } else if (month == 2) {

        sum += month * 28 * 24 * 60;
        sum += year * 12 * 28 * 24 * 60;

    }

    return sum;
}

Train *max_value(Root *tree) {
    if (tree->right)
        return max_value(tree->right);

    return tree->data;
}

void read_from_file(Root *Tree, char *file_name) {
    FILE *file = fopen(file_name, "rt");
    if (!file) {
        printf("Error!");
        return;
    }
    int n;
    fscanf(file, "%i", &n);

    for (int i = 0; i < n; i++) {
        Train *train = create_train();

        fscanf(file, "%s", train->ID);
        // printf("%s ", train1->ID);
        fscanf(file, "%i", &train->numberOfPassangers);
        // printf("%i ", train1->passanger_count);
        fscanf(file, "%i", &train->numberOfCarrige);
        // printf("%i ", train1->year);
        fscanf(file, "%i", &train->startTime);
        // printf("%i ",train1->month);
        fscanf(file, "%i", &train->arriveTime);
        // printf("%i ", train1->day);
        fscanf(file, "%i", &train->startLocation);
        // printf("%i ", train1->hour);
        fscanf(file, "%i", &train->arriveLocation);
        // printf("%i \n", train1->minutes);

        insert(&tree, train);
    }
}
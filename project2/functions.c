//
// Created by Tibor on 2021. 05. 09..
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

root *create_root(train *train1) {

    root *ag = (root *) (malloc(sizeof(root)));

    if (!ag) {
        printf("Error");
        return 0;
    }

    ag->adat = train1;
    ag->bal = 0;
    ag->jobb = 0;

    return ag;
}

void insert(root **fa, train *train1) {
    if (*fa == NULL) {
        *fa = create_root(train1);
    } else {
        train *max_train = max_value(*fa);

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
            insert(&((*fa)->bal), train1);
            printf("BAL ");
        } else {
            insert(&((*fa)->jobb), train1);
            printf("JOBB ");
        }
        printf("\n");

    }
}

void inorder(root *fa) {
    if (fa->bal)
        inorder(fa->bal);

    printf("ID: %s\n", fa->adat->ID);
    printf("\tPassanger count: %i\n", fa->adat->passanger_count);
    printf("\tDate: %i-%i-%i, %i:%i\n",
           fa->adat->year,
           fa->adat->month,
           fa->adat->day,
           fa->adat->hour,
           fa->adat->minutes
    );

    if (fa->jobb)
        inorder(fa->jobb);
}

train *create_train() {
    train *train1 = (train *) (malloc(sizeof(train)));

    if (!train1) {
        printf("Error");
        return 0;
    }

    strcpy(train1->ID, "");
    train1->passanger_count = 0;
    train1->year = 0;
    train1->month = 0;
    train1->day = 0;
    train1->hour = 0;
    train1->minutes = 0;

    return train1;
}

bool compare(int year1, int month1, int day1, int hour1, int minutes1,
             int year2, int month2, int day2, int hour2, int minutes2) {

    if (year1 > year2) {
        return true;

    } else if (year1 < year2) {
        return false;

    } else {
        if (month1 > month2) {
            return true;

        } else if (month1 < month2) {
            return false;

        } else {
            if (day1 > day2) {
                return true;

            } else if (day1 < day2) {
                return false;

            } else {
                if (hour1 > hour2) {
                    return true;

                } else if (hour1 < hour2) {
                    return false;

                } else {
                    if (minutes1 > minutes2) {
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

train *max_value(root *fa) {
    if (fa->jobb)
        return max_value(fa->jobb);

    return fa->adat;
}

void read_from_file(root *fa, char *file_name) {
    FILE *file = fopen(file_name, "rt");
    if (!file) {
        printf("Error!");
        return;
    }
    int n;
    fscanf(file, "%i", &n);

    for (int i = 0; i < n; i++) {
        train *train1 = create_train();

        fscanf(file, "%s", train1->ID);
        // printf("%s ", train1->ID);
        fscanf(file, "%i", &train1->passanger_count);
        // printf("%i ", train1->passanger_count);
        fscanf(file, "%i", &train1->year);
        // printf("%i ", train1->year);
        fscanf(file, "%i", &train1->month);
        // printf("%i ",train1->month);
        fscanf(file, "%i", &train1->day);
        // printf("%i ", train1->day);
        fscanf(file, "%i", &train1->hour);
        // printf("%i ", train1->hour);
        fscanf(file, "%i", &train1->minutes);
        // printf("%i \n", train1->minutes);

        insert(&fa, train1);
    }
}
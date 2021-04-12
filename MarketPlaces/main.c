#include <stdio.h>
#include "Functions.h"

int main() {


    Marketplace *marketplace = createMarket("Penny.txt");


    printf("---------------------------------------------\n");

    printf("\n1:Print the market! \n"
           "2:Print the male employees!\n"
           "3:Print the number of female employees!\n"
           "4:Print the position!\n"
           "5:Add employee!\n"
           "6:Print the most valuable employee!\n"
           "7:Sort the employees by age!\n"
           "8:Sort the employees by year of experience!\n"
           "9:Return the average year of birth!\n"
           "10: Exit\n");

    printf("---------------------------------------------\n");



    int x;
    Employees tmp;


    do {



        printf("What do you want to do? : ");
        scanf("%i", &x);

        switch (x) {
            case 1:
                printMarket(marketplace);
                break;
            case 2:
                printMale(marketplace);
                break;
            case 3:
                printf("Number of female employees: %i", printFemale(marketplace));
                break;
            case 4:
                printPosition(marketplace);
                break;
            case 5:
                addEmployee(marketplace);
                break;
            case 6:
                tmp = mvpEmployees(marketplace);
                printf("Most valuable employye is: %s %s", tmp.firstName, tmp.lastName);
                break;
            case 7:
                qsortByAge(marketplace);
                break;
            case 8:
                qsortByYearOfExperince(marketplace);
                break;
            case 9:
                printf("The average of year of birth is: %f", avgYearOfBirth(marketplace));
                break;
        }

    } while (x != 10);


    return 0;
}

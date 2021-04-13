#include <stdio.h>
#include "Functions.h"

int main() {


    Marketplace *marketplace = createMarket("Penny.txt");


    menu();



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
                printf("Most valuable employye is: %s %s\n", tmp.firstName, tmp.lastName);
                break;
            case 7:
                qsortByAge(marketplace);
                break;
            case 8:
                qsortByYearOfExperince(marketplace);
                break;
            case 9:
                printf("The average of year of birth is: %f\n", avgYearOfBirth(marketplace));
                break;
        }

    } while (x != 10);


    return 0;
}

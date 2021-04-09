#include <stdio.h>
#include "Functions.h"

int main() {

    Marketplace *marketplace = createMarket("import.txt");
    /*printMarket(marketplace);
    MvpEmployees(marketplace);
    printMale(marketplace);
    printFemale(marketplace);
    printSellers(marketplace);*/

    printf("\n1:Irasd ki a dolgozokat! \n "
           "2:Irasd ki a ferfiakat!\n"
           "3:Irasd ki a noket!\n"
           "4:Irasd ki az eladokat!\n"
           "5:Irasd ki a managereket!\n"
           "6:Irasd ki a takaritokat\n"
           "7:Irasd ki a feltoltoket\n"
           "8:Irasd ki az igazgatot(kat)\n");
    int x;
    printf("Add meg mit szeretnel tenni: ");
    scanf("%i", &x);
    switch (x) {
        case 1:
            printMarket(marketplace);
        case 2:
            printMale(marketplace);
        case 3:
            printFemale(marketplace);
        case 4:
            printSellers(marketplace);
        case 5:
            printManagers(marketplace);
        case 6:
            printCleaners(marketplace);
        case 7:
            printLoaders(marketplace);
        case 8:
            printDirectors(marketplace);

    }


    return 0;
}

#include <stdio.h>
#include "Functions.h"

int main() {

    printf("ge");

    Marketplace *marketplace = createMarket("Penny.txt");





    printf("\n1:Irasd ki a dolgozokat! \n"
           "2:Irasd ki a ferfiakat!\n"
           "3:Irasd ki a noket!\n"
           "4:Irasd ki az eladokat!\n"
           "5:Irasd ki a managereket!\n"
           "6:Irasd ki a takaritokat\n"
           "7:Irasd ki a feltoltoket\n"
           "8:Irasd ki az igazgatot(kat)\n"
           "9: Exit\n");
    int x;
    printf("Add meg mit szeretnel tenni: ");

    do {

        scanf("%i", &x);

        switch (x) {
            case 1:
                printMarket(marketplace);
                break;
            case 2:
                printMale(marketplace);
                break;
            case 3:
                printFemale(marketplace);
                break;
            case 4:
                printPosition(marketplace);
                break;


        }

    } while (x != 5);


    return 0;
}

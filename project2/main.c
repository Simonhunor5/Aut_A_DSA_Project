#include <stdio.h>
#include "functions.h"

int main() {
    /* printf("\n");
     printf("=======> Trains <=======\n");
     printf("        -> MENU <-        \n\n");
     int x;

     do {

         printf("What do you want to do? : ");
         scanf("%i", &x);

         switch (x) {
             case 1:

                 break;
             case 2:

                 break;
             case 3:

                 break;
             case 4:

                 break;
             case 5:

                 break;
             case 6:

                 break;
             case 7:

                 break;
             case 8:

                 break;
             case 9:

                 break;
         }

     } while (x != 10);*/
    Root *fa = NULL;
    fa = read_from_file("trains.txt");
    inorder(fa);

    addTrain(fa);
    inorder(fa);

    destroy(fa);

    return 0;
}

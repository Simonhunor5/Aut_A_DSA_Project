#include <stdio.h>
#include "Functions.h"

int main() {

    Marketplace *marketplace = createMarket("import.txt");
    printMarket(marketplace);
    MvpEmployees(marketplace);
    printMale(marketplace);
    printFemale(marketplace);
    printSellers(marketplace);

    return 0;
}

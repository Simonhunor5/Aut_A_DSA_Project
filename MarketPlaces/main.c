#include <stdio.h>
#include "Functions.h"

int main() {

    Marketplace *marketplace = createMarket("import.txt");
    printMarket(marketplace);

    return 0;
}

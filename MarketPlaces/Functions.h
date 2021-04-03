//
// Created by Antal József on 2021. 03. 22..
//

#ifndef MARKETPLACES_FUNCTIONS_H
#define MARKETPLACES_FUNCTIONS_H

#include "Enums.h"
#include "Structs.h"

Marketplace *createMarket(char *fileName);

void printMarket(Marketplace *marketplace);

void MvpEmployees(Marketplace *marketplace);
void printFemale(Marketplace *marketplace);
void printMale(Marketplace *marketplace);
void printSellers(Marketplace *marketplace);



#endif //MARKETPLACES_FUNCTIONS_H

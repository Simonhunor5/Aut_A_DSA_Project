//
// Created by Antal József on 2021. 03. 22..
//

#ifndef MARKETPLACES_FUNCTIONS_H
#define MARKETPLACES_FUNCTIONS_H

#include "Enums.h"
#include "Structs.h"

Marketplace *createMarket(char *fileName);

void printMarket(Marketplace *marketplace);

Employees mvpEmployees(Marketplace *marketplace);

int printFemale(Marketplace *marketplace);

void printMale(Marketplace *marketplace);

void printPosition(Marketplace *marketplace);

void addEmployee(Marketplace *marketplace);

int cmpfunc (const Employees * a, const Employees * b);

void qsortByAge(Marketplace* marketplace);

int cmpfunc1 (const Employees * a, const Employees * b);

void qsortByYearOfExperince(Marketplace* marketplace);

float avgYearOfBirth(Marketplace* marketplace);

#endif //MARKETPLACES_FUNCTIONS_H
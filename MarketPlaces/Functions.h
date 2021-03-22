//
// Created by Antal József on 2021. 03. 22..
//

#ifndef MARKETPLACES_FUNCTIONS_H
#define MARKETPLACES_FUNCTIONS_H

enum Position{
        DIRECTOR = 0,
        MANAGER = 1,
        SECRETARY = 2,
        SELLER = 3,
        LOADER = 4,
        CLEANER = 5
};

enum TypeOfMarket{
        MIXED_MARKET = 0,
        FOOD_MARKET = 1,
        TECH_MARKET = 2,
        CONSTRUCTION_MARKET = 3
};

typedef struct {
    char firstName[20];
    char lastName[20];
    int yearOfBirth;
    int yearOfExperience;
    enum Position position;
}Employees;

typedef struct {
    char  marketplaceName[20];
    char  location[20];
    int numOfEmployees;
    int marketID;
    Employees* employees;
    enum TypeOfMarket type;
}Marketplace;

Marketplace* createMarket(char* fileName);
void printMarket(Marketplace* marketplace);

#endif //MARKETPLACES_FUNCTIONS_H

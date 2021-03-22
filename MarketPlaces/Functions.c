//
// Created by Antal József on 2021. 03. 22..
//

#include <stdlib.h>
#include <stdio.h>
#include "Functions.h"

Marketplace* createMarket(char* fileName)
{
    FILE* fin = fopen(fileName, "r");

    Marketplace* marketplace = (Marketplace *)malloc(sizeof(Marketplace));

    fscanf(fin,"%s",marketplace ->marketplaceName);
    fscanf(fin,"%s",marketplace ->location);
    fscanf(fin,"%i",&marketplace ->numOfEmployees);
    fscanf(fin,"%i",&marketplace ->marketID);
    fscanf(fin,"%i",&marketplace ->type);

    marketplace -> employees = (Employees*)malloc(marketplace->numOfEmployees*sizeof(Employees));

    for (int i = 0; i < marketplace->numOfEmployees; ++i) {
        fscanf(fin,"%s",marketplace->employees[i].firstName);
        fscanf(fin,"%s",marketplace->employees[i].lastName);
        fscanf(fin,"%i",&marketplace->employees[i].yearOfBirth);
        fscanf(fin,"%i",&marketplace->employees[i].yearOfExperience);
        fscanf(fin,"%i",&marketplace->employees[i].position);
    }

    return marketplace;
}

void printMarket(Marketplace* marketplace){

    printf("Name of market: %s\n",marketplace -> marketplaceName);
    printf("Location: %s\n",marketplace -> location);
    printf("Market ID: %i\n\n",marketplace -> marketID);
    printf("The type of the market is: ");

    switch (marketplace->type) {
        case MIXED_MARKET:  printf("Mixed market\n");break;
        case FOOD_MARKET:  printf("Food market\n");break;
        case TECH_MARKET:  printf("Tech market\n");break;
        case CONSTRUCTION_MARKET:  printf("Construction market\n");break;
        default: printf("Other/n");break;
    }

    for (int i = 0; i < marketplace ->numOfEmployees; ++i) {
        printf("%i. %s ",i+1,marketplace->employees[i].firstName);
        printf("%s ",marketplace->employees[i].lastName);
        printf("%i ",marketplace->employees[i].yearOfBirth);
        printf("Year of experience: %i ",marketplace->employees[i].yearOfExperience);
        printf("The position is: ");

        switch (marketplace->employees[i].position) {
            case DIRECTOR: printf("Director\n");break;
            case MANAGER: printf("Mananger\n");break;
            case SECRETARY: printf("Secretary\n");break;
            case SELLER: printf("Seller\n");break;
            case LOADER: printf("Loader\n");break;
            case CLEANER: printf("Cleaner\n");break;
        }
    }
}
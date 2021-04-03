//
// Created by Antal József on 2021. 03. 22..
//

#ifndef MARKETPLACES_STRUCTS_H
#define MARKETPLACES_STRUCTS_H


typedef struct {
    char firstName[20];
    char lastName[20];
    int yearOfBirth;
    int yearOfExperience;
    enum Position position;
    enum Gender gender;
}Employees;

typedef struct {
    char  marketplaceName[20];
    char  location[20];
    int numOfEmployees;
    int marketID;
    Employees* employees;
    enum TypeOfMarket type;
}Marketplace;


#endif //MARKETPLACES_STRUCTS_H

cmake_minimum_required(VERSION 3.17)
project(Aut_A_DSA_Project C)

set(CMAKE_C_STANDARD 11)

include_directories(MarketPlaces)

add_executable(Aut_A_DSA_Project
        MarketPlaces/Enums.h
        MarketPlaces/Functions.c
        MarketPlaces/Functions.h
        MarketPlaces/main.c
        MarketPlaces/Structs.h)

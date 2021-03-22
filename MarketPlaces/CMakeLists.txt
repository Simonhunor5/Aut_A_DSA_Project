cmake_minimum_required(VERSION 3.17)
project(MarketPlaces C)

set(CMAKE_C_STANDARD 99)

add_executable(MarketPlaces main.c Functions.c Functions.h Enums.h Structs.h)
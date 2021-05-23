cmake_minimum_required(VERSION 3.19)
project(Project3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project3 main.c Array/Array.c Array/Array.h BinarySearchTree/BinarySearchTree.c BinarySearchTree/BinarySearchTree.h DynamicList/DynamicList.c DynamicList/DynamicList.h HashTable/HashTable.c HashTable/HashTable.h Heap/Heap.c Heap/Heap.h)
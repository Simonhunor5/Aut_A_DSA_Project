#include <stdio.h>
#include "Book/Book.h"


int main() {

    Book* book1 = createBook("Hunor", "Simon");
    printBook(book1);

    /*
    void menu(Book* book);


    void menu(Book *book) {
        printf("=======> BOOKS <=======\n");
        printf("        -> MENU <-        \n\n");

        printf("1: Search\n"
               "2: New book inserted\n"
               "3: Number of books\n"
               "4: Exit\n");

        int x, dbp, dbf;

        do {
            printf("What do you want to do? :");

            scanf("%i", &x);


            switch (x) {

                case 1:
                    int y;
                    printf("> 1. Array Operations              \n");
                    printf("> 2. Dynamic Linked List Operations\n");
                    printf("> 3. Binary Search Tree Operations \n");
                    printf("> 4. Heap Operations               \n");
                    printf("> 5. Hash Table Operations         \n");
                    printf("Choice: ");
                    scanf("%i", &y);
                    switch(y){
                        case 1:
                            printf("Title is: ")
                            binarySearch
                            break;
                    }


                    break;
                case 2:

                    break;
                case 3:

                    break;
            }
        } while (x != 4);
    }

    void arrayOperations() {
        int choice;

        while (true) {
            printf("\n");
            printf("========> BOOKS <========\n");
            printf("         -> ARRAY <-        \n\n");
            printf("> 1. Print words              \n");
            printf("> 2. Lookup a word            \n");
            printf("> 3. Back to main menu        \n");
            printf("> 4. Exit                     \n");
            printf("<---------------------------->\n");
            printf("> Choice: ");

            scanf("%i", &choice);
            printf("\n");

            switch (choice) {

                case 1:
                    printWords();
                    break;

                case 2:
                    arrayOperations_lookup();
                    break;

                case 3:
                    activateMenu();
                    break;

                case 4:
                    printf("=========> Goodbye! <=========\n");
                    exit(0);

                default:
                    printf("==> Error: UNDEFINED INPUT <==\n");
                    exit(-1);
            }
        }
    }

    void dynamicLinkedListOperations() {
        int choice;

        while (true) {
            printf("\n");
            printf("========> BOOKS <========\n");
            printf("  -> Dynamic Linked List <- \n\n");
            printf("> 1. Print words              \n");
            printf("> 2. Lookup a word            \n");
            printf("> 3. Back to main menu        \n");
            printf("> 4. Exit                     \n");
            printf("<---------------------------->\n");
            printf("> Choice: ");

            scanf("%i", &choice);
            printf("\n");

            switch (choice) {

                case 1:
                    traverseLinkedList(LINKED_LIST);
                    break;

                case 2:
                    dynamicLinkedListOperations_lookup();
                    break;

                case 3:
                    activateMenu();
                    break;

                case 4:
                    printf("=========> Goodbye! <=========\n");
                    exit(0);

                default:
                    printf("==> Error: UNDEFINED INPUT <==\n");
                    exit(-1);
            }
        }
    }

    void binarySearchTreeOperations() {

    }

    void heapOperations() {

    }

    void hashTableOperations() {

    }

/// Helper functions

    void arrayOperations_lookup() {
        char tmp[30];

        printf("The word you're looking for: ");
        scanf("%s", tmp);

        printf("%s => %s", tmp, lookupArray(tmp));
    }

    void dynamicLinkedListOperations_lookup() {
        char tmp[30];

        printf("The word you're looking for: ");
        scanf("%s", tmp);

        printf("%s => %s", tmp, lookupLinkedList(tmp));
    }

    */

    return 0;
}

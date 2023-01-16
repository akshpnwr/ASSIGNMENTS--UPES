#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "cricketer.c"
#include "customer.c"
#include "vowels.c"
#include "numberToWords.c"

int main()
{
    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Experiment 1 - Cricketers");
        printf("\n2. Experiment 2 - Customers of bank");
        printf("\n3. Experiment 3 - Vowel occurences");
        printf("\n4. Experiment 4 - Number in words");

        printf("\n----------------------------------------");
        printf("\n0. Exit");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nENTER A VALID INPUT!! NO ALPHABETS ALLOWED!!");
            printf("\nEXITING");
            exit(1);
        }

        switch (choice)
        {
        case 0:
            printf("\n-----------------\n");
            printf("Exiting....");
            exit(1);
            break;
        case 1:
            printf("\n-----------------\n");
            cricketer();
            break;
        case 2:
            printf("\n-----------------\n");
            customer();
            break;
        case 3:
            printf("\n-----------------\n");
            vowels();
            break;
        case 4:
            printf("\n-----------------\n");
            numberToWords();
            break;
        default:
            printf("Something went wrong!");
            printf("\n-----------------\n");
        }

        printf("\nPress any key to continue..... ");
        getch();
    }

    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "Pascal.c"
#include "Ramanujan.c"
#include "Population.c"
#include "Table.c"
#include "CountNumbers.c"
#include "Pattern.c"

int main()
{
    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Experiment 1 - Count positive, negative and zeroes");
        printf("\n2. Experiment 2 - Multiplication table");
        printf("\n3. Experiment 3 - Patterns");
        printf("\n4. Experiment 4 - Population");
        printf("\n5. Experiment 5 - Ramanujan");

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
            CountNumbers();
            break;
        case 2:
            printf("\n-----------------\n");
            Table();
            break;
        case 3:
            printf("\n-----------------\n");
            Pattern();
            printf("\n-----------------\n");
            Pascal();
            break;
        case 4:
            printf("\n-----------------\n");
            Population();
            break;
        case 5:
            printf("\n-----------------\n");
            Ramanujan();
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

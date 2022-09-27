#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "append.c"
#include "matrix.c"
#include "modifyArray.c"
#include "smallest.c"

int main()
{
    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Experiment 1 - Transpose and symmetrical");
        printf("\n2. Experiment 2 - Appending in different ways");
        printf("\n3. Experiment 3 - Find smallest using pointer");
        printf("\n4. Experiment 4 - Modifying an array");

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
            matrix();
            break;
        case 2:
            printf("\n-----------------\n");
            append();
            break;
        case 3:
            printf("\n-----------------\n");
            smallest();
            break;
        case 4:
            printf("\n-----------------\n");
            modifyArray();
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

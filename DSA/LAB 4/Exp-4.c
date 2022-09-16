#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "getBinary.c"
#include "getOctal.c"
#include "getHexadecimal.c"

int main()
{

    int choice = 1, checkInput, num;

    printf("Enter a number(in decimal) for conversion : ");
    scanf("%d", &num);

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Convert to Binary");
        printf("\n2. Convert to Octal");
        printf("\n3. Convert to Hexadecimal");

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
            getBinary(num);
            break;
        case 2:
            printf("\n-----------------\n");
            getOctal(num);
            break;
        case 3:
            printf("\n-----------------\n");
            getHexadecimal(num);
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

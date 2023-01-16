#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "./conversions/decimalConversions.c"
#include "./conversions/binaryConversions.c"
#include "./conversions/octalConversions.c"
#include "./conversions/hexadecimalConversions.c"

int main()
{

    int choice = 1, checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Convert from Decimal");
        printf("\n2. Convert from Binary");
        printf("\n3. Convert from Octal");
        printf("\n4. Convert from Hexadecimal");

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
            decimalConversions();
            break;
        case 2:
            printf("\n-----------------\n");
            binaryConversions();
            break;
        case 3:
            printf("\n-----------------\n");
            octalConversions();
            break;
        case 4:
            printf("\n-----------------\n");
            hexadecimalConversions();
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

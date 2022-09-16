#include "./decimalTo/decimalToBinary.c"
#include "./decimalTo/decimalToOctal.c"
#include "./decimalTo/decimalToHexadecimal.c"

int decimalConversions()
{

    int choice = 1, checkInput, num;

    printf("\n----------------------------------------");
    printf("Enter a decimal number: ");
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
            decimalToBinary(num);
            break;
        case 2:
            printf("\n-----------------\n");
            decimalToOctal(num);
            break;
        case 3:
            printf("\n-----------------\n");
            decimalToHexadecimal(num);
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
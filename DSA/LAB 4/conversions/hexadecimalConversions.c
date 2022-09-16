#include "./hexadecimalTo/hexadecimalToDecimal.c"
#include "./hexadecimalTo/hexadecimalToBinary.c"
#include "./hexadecimalTo/hexadecimalToOctal.c"

int hexadecimalConversions()
{
    int choice = 1, checkInput;

    printf("\n----------------------------------------\n");
    char str[MAX_LIMIT];
    printf("Enter a hexadecimal number: ");
    scanf("%s", &str);

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Convert to Decimal");
        printf("\n2. Convert to Binary");
        printf("\n3. Convert to Octal");

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
            hexadecimalToDecimal(str);
            break;
        case 2:
            printf("\n-----------------\n");
            hexadecimalToBinary(str);
            break;
        case 3:
            printf("\n-----------------\n");
            hexadecimalToOctal(str);
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
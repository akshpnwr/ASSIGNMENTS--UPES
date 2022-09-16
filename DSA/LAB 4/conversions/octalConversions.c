#include "./octalTo/octalToDecimal.c"
#include "./octalTo/octalToBinary.c"
#include "./octalTo/octalToHexadecimal.c"

int octalConversions()
{
    int choice = 1, checkInput, num;

    printf("\n----------------------------------------\n");
    printf("Enter an octal number: ");
    scanf("%d", &num);

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Convert to Decimal");
        printf("\n2. Convert to Binary");
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
            octalToDecimal(num);
            break;
        case 2:
            printf("\n-----------------\n");
            octalToBinary(num);
            break;
        case 3:
            printf("\n-----------------\n");
            octalToHexadecimal(num);
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
#include <stdio.h>
int CountNumbers()
{
    int num, a;
    char choice = 'Y';
    int countPositive = 0, countNegative = 0, countZero = 0;
    while (choice == 'Y' || choice == 'y')
    {
        printf("\nPlease enter a number:");
        scanf("%d", &num);

        if (num > 0)
        {
            countPositive++;
        }
        else if (num < 0)
        {
            countNegative++;
        }
        else
        {
            countZero++;
        }

        printf("Do you want to continue (y/n) ?");
        scanf(" %c", &choice);
    }

    printf("\nPositive numbers: %d", countPositive);
    printf("\nNegative numbers: %d", countNegative);
    printf("\nZeroes: %d", countZero);

    return 0;
}

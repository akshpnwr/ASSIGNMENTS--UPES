#include <math.h>

#ifndef OTD
#define OTD

int octalToDecimal(int num)
{
    int digit, decimal = 0, index = 0;

    while (num != 0)
    {
        digit = num % 10;

        decimal = decimal + digit * pow(8, index);

        index++;
        num = num / 10;
    }

    printf("\nDecimal : %d", decimal);

    return decimal;

    return 0;
}

#endif
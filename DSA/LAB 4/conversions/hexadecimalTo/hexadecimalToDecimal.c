#include <math.h>
#include <stdio.h>
#include <string.h>

#ifndef HTD
#define HTD

#define MAX_LIMIT 20

int hexadecimalToDecimal(char str[])
{
    int decimal = 0;

    int power = strlen(str) - 1;

    int intValue;

    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == 'A')
            decimal = decimal + 10 * pow(16, power);
        else if (str[i] == 'B')
            decimal = decimal + 11 * pow(16, power);
        else if (str[i] == 'C')
            decimal = decimal + 12 * pow(16, power);
        else if (str[i] == 'D')
            decimal = decimal + 13 * pow(16, power);
        else if (str[i] == 'E')
            decimal = decimal + 14 * pow(16, power);
        else if (str[i] == 'F')
            decimal = decimal + 15 * pow(16, power);

        else
        {
            intValue = str[i] - '0';
            decimal = decimal + intValue * pow(16, power);
        }
        power--;
    }

    printf("\nDecimal : %d", decimal);

    return decimal;
}

#endif
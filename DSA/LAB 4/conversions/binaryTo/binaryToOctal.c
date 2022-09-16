#include <stdio.h>
#include "binaryToDecimal.c"
#include "../decimalTo/decimalToOctal.c"

int binaryToOctal(int num)
{
    int decimal = binaryToDecimal(num);
    printf("\n");
    decimalToOctal(decimal);

    return 0;
}

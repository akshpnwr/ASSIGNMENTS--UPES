#include <stdio.h>
#include "binaryToDecimal.c"
#include "../decimalTo/decimalToHexadecimal.c"

int binaryToHexadecimal(int num)
{
    printf("BTH");
    int decimal = binaryToDecimal(num);
    printf("\n");
    decimalToHexadecimal(decimal);

    return 0;
}

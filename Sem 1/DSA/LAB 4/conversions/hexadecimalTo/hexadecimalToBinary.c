// #include <stdio.h>
#include "hexadecimalToDecimal.c"
#include "../decimalTo/decimalToBinary.c"

int hexadecimalToBinary(char str[])
{
    int decimal = hexadecimalToDecimal(str);
    printf("\n");
    decimalToBinary(decimal);

    return 0;
}

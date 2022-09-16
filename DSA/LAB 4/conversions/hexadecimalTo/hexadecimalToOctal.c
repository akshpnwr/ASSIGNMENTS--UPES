// #include <stdio.h>
#include "hexadecimalToDecimal.c"
#include "../decimalTo/decimalToOctal.c"

int hexadecimalToOctal(char str[])
{
    int decimal = hexadecimalToDecimal(str);
    printf("\n");
    decimalToOctal(decimal);

    return 0;
}

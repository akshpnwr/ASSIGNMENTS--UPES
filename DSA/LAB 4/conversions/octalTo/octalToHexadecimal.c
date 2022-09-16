#include "octalToDecimal.c"
#include "../decimalTo/decimalToHexadecimal.c"

int octalToHexadecimal(int num)
{
    int decimal = octalToDecimal(num);
    printf("\n");
    decimalToHexadecimal(decimal);

    return 0;
}
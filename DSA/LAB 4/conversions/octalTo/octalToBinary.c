#include "octalToDecimal.c"
#include "../decimalTo/decimalToBinary.c"

int octalToBinary(int num)
{
    int decimal = octalToDecimal(num);
    printf("\n");
    decimalToBinary(decimal);
    return 0;
}
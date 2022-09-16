#ifndef DTO
#define DTO

int decimalToOctal(int num)
{

    printf("Octal of %d = ", num);

    int octal[30], index = 0;

    while (num != 0)
    {
        octal[index] = num % 8;
        num = num / 8;
        index++;
    }

    for (index = index - 1; index >= 0; index--)
    {
        printf("%d ", octal[index]);
    }

    return 0;
}

#endif
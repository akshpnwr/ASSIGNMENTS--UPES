#ifndef DTB
#define DTB

int decimalToBinary(int num)
{
    printf("Binary of %d = ", num);

    int binary[30], index = 0;

    while (num != 0)
    {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    for (index = index - 1; index >= 0; index--)
    {
        printf("%d ", binary[index]);
    }

    return 1;
}

#endif
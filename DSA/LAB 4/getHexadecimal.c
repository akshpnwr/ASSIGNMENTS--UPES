int getHexadecimal(int num)
{

    printf("Hexadecimal of %d = ", num);

    int hexa[30], index = 0;

    while (num != 0)
    {
        hexa[index] = num % 16;

        num = num / 16;
        index++;
    }

    for (index = index - 1; index >= 0; index--)
    {
        if (hexa[index] > 9)
        {
            if (hexa[index] == 10)
                printf("A ");
            if (hexa[index] == 11)
                printf("B ");
            if (hexa[index] == 12)
                printf("C ");
            if (hexa[index] == 13)
                printf("D ");
            if (hexa[index] == 14)
                printf("E ");
            if (hexa[index] == 15)
                printf("F ");
        }

        else
            printf("%d ", hexa[index]);
    }

    return 0;
}

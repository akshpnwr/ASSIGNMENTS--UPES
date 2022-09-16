#include <stdio.h>

int main()
{

    int num = 12;
    int index = 0;
    int factors[num];

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            factors[index] = i;
            index++;
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", factors[i]);
    }

    return 0;
}

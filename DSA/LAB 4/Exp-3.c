#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int num)
{

    int limit = sqrt(num);

    for (int i = 2; i < limit; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{

    int num;

    printf("Enter a number to get it's prime factors: ");

    scanf("%d", &num);

    printf("Prime factors are: ");
    if (num == 1)
    {
        printf("1");
        return 0;
    }

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (checkPrime(i))
            {
                while (num % i == 0)
                {
                    printf("%d ", i);
                    num = num / i;
                }
            }
        }
    }

    return 0;
}

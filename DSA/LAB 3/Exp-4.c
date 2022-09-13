#include <stdio.h>
#include <math.h>

int main()
{

    float population = 100000;
    for (int i = 1; i <= 10; i++)
    {
        population = population + 0.1 * population;
        printf("\nPopulation at year %d = %.2f", i, population);
    }

    printf("\nAfter a decade: %.2f", population);

    return 0;
}

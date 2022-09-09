#include <stdio.h>

int main()
{
    // Write C code here
    int s1, s2, s3;

    printf("Enter sides of the triangle:\n ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 == 0 || s2 == 0 || s3 == 0)
    {
        printf("Please enter a valid value!");
        return 0;
    }

    if ((s2 + s3 > s1) && (s1 + s3 > s2) && (s1 + s2 > s3))
    {
        printf("\nTriangle is valid.");

        if (s1 == s2 && s2 == s3)
            printf("\nEquilateral triangle");

        else if ((s1 == s2) || (s2 == s3) || (s3 == s1))
            printf("\nIsosceles triangle");

        else if ((s1 * s1 == s2 * s2 + s3 * s3) || (s2 * s2 == s1 * s1 + s3 * s3) || (s3 * s3 == s2 * s2 + s1 * s1))
        {
            printf("\nRight triangle");
        }

        else
        {
            printf("\nScalene triangle");
        }
    }

    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}
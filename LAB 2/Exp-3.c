#include <stdio.h>
int main()
{

    int x1 = 2, y1 = 4;
    int x2 = 4, y2 = 6;
    int x3 = 6, y3 = 8;

    int m1 = y2 - y1 / x2 - x1;
    int m2 = y3 - y2 / x3 - x2;

    printf("%d\n%d", m1, m2);

    if (m1 == m2)
        printf("\nPoints are collinear");
    else
        printf("\nPoints are non-collinear");

    return 0;
}

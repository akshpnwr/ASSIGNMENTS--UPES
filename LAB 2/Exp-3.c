#include <stdio.h>
int main()
{

    int x1, y1, x2, y2, x3, y3;

    printf("Enter co-ordinates of first point (x1,y1): ");
    scanf("%d%d", &x1, &y1);

    printf("Enter co-ordinates of first point (x2,y2): ");
    scanf("%d%d", &x2, &y2);

    printf("Enter co-ordinates of first point (x3,y3): ");
    scanf("%d%d", &x3, &y3);

    int m1 = y2 - y1 / x2 - x1;
    int m2 = y3 - y2 / x3 - x2;

    printf("%d\n%d", m1, m2);

    if (m1 == m2)
        printf("\nPoints are collinear");
    else
        printf("\nPoints are non-collinear");

    return 0;
}

int rectangle()
{

    int l1, b1, l2, b2, l3, b3;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d%d", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d%d", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d%d", &l3, &b3);

    int p1 = 2 * (l1 + b1);
    int p2 = 2 * (l2 + b2);
    int p3 = 2 * (l3 + b3);

    printf("%d : %d : %d", p1, p2, p3);

    p1 > p2 &&p1 > p3 ? printf("\nRectangle 1 has the greatest perimeter") : (p2 > p3 && p2 > p3 ? printf("\nRectangle 2 has the greatest perimeter") : (p3 > p2 && p3 > p1 ? printf("\nRectangle 3 has the greatest perimeter") : printf("No rectangle")));

    return 0;
}

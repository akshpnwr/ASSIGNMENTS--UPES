#include <stdio.h>
#include <stdlib.h>

struct Cricketer
{
    char name[50];
    int age;
    int numOfTests;
    int averageRuns;
};

int comparator(const void *p1, const void *p2)
{
    return (*(int *)p1 - *(int *)p2);
}

int main()
{
    struct Cricketer c[3];

    printf("Enter details of cricketers\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of cricketer %d :", i + 1);
        scanf(" ");
        fgets(c[i].name, 50, stdin);
        printf("Enter age of cricketer %d :", i + 1);
        scanf("%d", &c[i].age);
        printf("Enter number of tests of cricketer %d :", i + 1);
        scanf("%d", &c[i].numOfTests);
        printf("Enter average runs of cricketer %d :", i + 1);
        scanf("%d", &c[i].averageRuns);

        printf("\n");
    }

    int runs[3];

    for (int i = 0; i < 3; i++)
    {
        runs[i] = c[i].averageRuns;
    }

    qsort(runs, 3, sizeof(int), comparator);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (runs[i] == c[j].averageRuns)
            {
                printf("Name : %s", c[j].name);
                printf("Age : %d\n", c[j].age);
                printf("Number of tests : %d\n", c[j].numOfTests);
                printf("Average runs : %d\n", c[j].averageRuns);
                printf("\n");
            }
        }
    }

    return 0;
}

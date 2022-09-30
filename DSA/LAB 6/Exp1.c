#include <stdio.h>
#include <stdlib.h>

struct Cricketer
{
    char name[50];
    int age;
    int numOfTests;
    int averageRuns;
};

void sort(int arr[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++)
    {

        minIndex = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main()
{
    int size = 20;
    struct Cricketer c[20];

    printf("Enter details of cricketers\n");
    for (int i = 0; i < 20; i++)
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

    int runs[20];

    for (int i = 0; i < 20; i++)
    {
        runs[i] = c[i].averageRuns;
    }

    sort(runs, 20);

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
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

#include <stdio.h>

struct Customer
{
    unsigned long int acc;
    char name[50];
    float bal;
};

void printBelow100(struct Customer c[], int size)
{
    printf("\nDetails of customers with balance below 100 rupees\n");
    for (int i = 0; i < size; i++)
    {
        if (c[i].bal < 100)
        {
            printf("Name : %s", c[i].name);
            printf("Account number : %lu", c[i].acc);
            printf("\nBalance : %f\n", c[i].bal);
        }
    }
}

int main()
{

    int size = 200;
    printf("Enter details of the customers\n");

    struct Customer c[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter name of customer %d : ", i + 1);
        scanf(" ");
        fgets(c[i].name, 50, stdin);
        printf("Enter account number of customer %d : ", i + 1);
        scanf("%lu", &c[i].acc);
        printf("Enter balance of customer %d : ", i + 1);
        scanf("%f", &c[i].bal);
    }

    printBelow100(c, size);

    return 0;
}

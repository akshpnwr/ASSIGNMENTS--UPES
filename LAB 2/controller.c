#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int choice = 1;

    printf("%d", choice);

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Experiment 1 - Triangle");
        printf("\n2. Experiment 2 - BMI Index");
        printf("\n3. Experiment 3 - Collinearity check");
        printf("\n4. Experiment 4 - Gregorian Calender");
        printf("\n5. Experiment 5 - Rectangle perimeter");
        printf("\n----------------------------------------");
        printf("\n0. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("CHOICE 1");
            break;
        case 2:
            printf("CHOICE 2");
            break;
        case 3:
            printf("CHOICE 3");
            break;
        case 4:
            printf("CHOICE 4");
            break;
        case 5:
            printf("CHOICE 5");
            break;
        default:
            printf("Exiting...");
            break;
        }

        printf("\nPress any key to continue..... ");
        getch();
    }

    return 0;
}

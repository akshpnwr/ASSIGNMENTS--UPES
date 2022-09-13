#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "Triangle.c"
#include "BMI.c"
#include "Collinearity.c"
#include "Calender.c"
#include "Rectangle.c"

int main()
{
    int choice = 1;
    int checkInput;

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

        if (scanf("%d", &choice) != 1)
        {
            printf("\nENTER A VALID INPUT!! NO ALPHABETS ALLOWED!!");
            printf("\nEXITING");
            exit(1);
        }

        switch (choice)
        {
        case 0:
            printf("\n-----------------\n");
            printf("Exiting....");
            exit(1);
            break;
        case 1:
            printf("\n-----------------\n");
            triangle();
            break;
        case 2:
            printf("\n-----------------\n");
            BMI();
            break;
        case 3:
            printf("\n-----------------\n");
            collinearity();
            break;
        case 4:
            printf("\n-----------------\n");
            calender();
            break;
        case 5:
            printf("\n-----------------\n");
            rectangle();
            break;
        default:
            printf("Something went wrong!");
            printf("\n-----------------\n");
        }

        printf("\nPress any key to continue..... ");
        getch();
    }

    return 0;
}

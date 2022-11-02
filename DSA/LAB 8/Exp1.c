#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "stack_implementation.c"

int main() {

    init();

    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Check stack is empty or not");
        printf("\n4. Peak element");
        printf("\n5. Size of stack");
        printf("\n6. Print stack");

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
            int value;
            printf("Enter a value to push : ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            printf("\n-----------------\n");
            unsigned poppedValue = pop();
            if(poppedValue != -1) printf("\n Value popped : %d",poppedValue);
            break;
        case 3:
            printf("\n-----------------\n");
            printf(isEmpty() ? "true" : "false");
            isEmpty();
            break;
        case 4:
            printf("\n-----------------\n");
            printf("%d",peak());
            break;
        case 5:
            printf("\n-----------------\n");
            printf("%d",sizeOfStack());
            break;
        case 6:
            printf("\n-----------------\n");
            printStack();
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

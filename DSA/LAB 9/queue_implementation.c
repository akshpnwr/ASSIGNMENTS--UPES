#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = 0, rear = 0;

void enqueue(int value) {

    if (rear == MAX_SIZE)
    {
        printf("\n---OVERFLOW---\n");
    }
    
    else
    {
        queue[rear] = value;
        rear++;
    }

} 

void dequeue() {

    if (front == rear)
    {
        printf("\n---UNDERFLOW---\n");
        printf("\n---NO ELEMENTS TO DELETE---");
    }

    else {

        printf("Dequeued element : %d", queue[front]);
        queue[front] = 0;
        front++;
    }

}

void display() {

    printf("\nQueue : ");
    for (int i = front; i < rear; i++)
    {
        printf("%d ",queue[i]);
    }
    
}

void reverse(int front, int rear) {

    if (front >= rear)
    {
        return;
    }

    else {
        int temp = queue[front];
        queue[front] = queue[rear];
        queue[rear] = temp;

        reverse(front+1, rear-1);
    }
}


int main() {


    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Reverse");
        printf("\n4. Display");
 
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
            printf("Enter value to add to queue : ");
            scanf("%d",&value);
            enqueue(value);
            break;
        case 2:
            printf("\n-----------------\n");
            dequeue();
            break;
        case 3:
            printf("\n-----------------\n");
            reverse(front, rear-1);
            display();
            break;
        case 4:
            printf("\n-----------------\n");
            display();
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

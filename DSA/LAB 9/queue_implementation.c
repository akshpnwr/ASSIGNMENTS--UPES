#include<stdio.h>

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



int main() {

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    dequeue();
    dequeue();
   

    display();

    
return 0;
}

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

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);


    dequeue();
    dequeue();
   

    display();
    reverse(front, rear-1);
    display();
    
return 0;
}

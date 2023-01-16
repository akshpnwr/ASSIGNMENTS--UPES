#include<stdio.h>
#include<stdlib.h>

struct queue {
    int data;
    struct queue *next;
};

typedef struct queue qu;

qu* front = NULL;
qu* rear = NULL;

qu* createNode(int data) {
    qu* new = (qu*) malloc(sizeof(qu));

    new->data = data;
    new->next = NULL;    

    return new;
}

void push(int data) {
    qu* new = createNode(data);

    if (front == NULL)
    {
        front = new;
        rear = new;
    }
    
    else
    {
        qu* ptr = rear;
        ptr->next = new;
        rear = new;
    }
    
}

int pop() {
    if (front == NULL)
    {
        printf("\nUNDERFLOW\n");
    }

    else 
    {   
        int poppedValue;
        qu* ptr = front;
        front = front->next;
        poppedValue = ptr->data;
        ptr->next=NULL;
        free(ptr);
        return poppedValue;
    }
    
}

void display() {
    printf("\nQueue : ");
    qu* ptr = front;

    while (ptr!=rear)
    {
        printf("%d ",ptr->data);        
        ptr = ptr->next;
    }
    printf("%d ",ptr->data);        
    
}

// int main() {
// push(1);
// push(2);
// push(3);
// push(4);
// push(5);

// pop();

// display();

// return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

#define size 5
int* stack;
int top = 0;

void init() {
    stack = calloc(size, sizeof(int*));
}

void push(int value) {

    if (top == size)
    {
        // printf("Overflow");
        stack = realloc(stack,(size*2)*sizeof(int));
        // return;
    }

    stack[top] = value;
    top++;
}

int pop() {

    if (top==0)
    {
     
        fprintf(stderr,"\n-----UNDERFLOW-----\n");
        return -1;
    }
    

    int popped = stack[top-1];
    top--;
    return popped;
}

void printStack() {
    for (int i = 0; i < top; i++)
    {
        printf("%d ",stack[i]);
    }

}

bool isEmpty() {
    return (top == 0);
}

int peak(){
    return stack[top-1];
}

int sizeOfStack(){
    return top;
}


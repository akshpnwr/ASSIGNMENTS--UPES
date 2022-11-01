#include<stdio.h>
#include<stdlib.h>


// struct Stack
// {
//     int top;
//     int *ptr;
// };

#define size 5
// 
int* stack;
int top = 0;


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
     
        fprintf(stderr,"\n-----UNDERFLOW-----");
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

int main() {

    stack = calloc(size, sizeof(int*));

    push(1);
    push(2);
    push(3);
    // push(4);
    // push(5);
    // push(5);
    // push(5);
    // push(5);
    
    printf("Before : ");
    printStack();

    pop();
    pop();
    pop();
    pop();


    printf("\n");

    printf("After : ");
    printStack();

return 0;
}

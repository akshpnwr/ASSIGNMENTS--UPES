#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define size 5
char* stack;
int top = 0;

void init() {
    stack = calloc(size, sizeof(char*));
}

void push(char value) {

    if (top == size)
    {
        // printf("Overflow");
        stack = realloc(stack,(size*2)*sizeof(char));
        // return;
    }

    stack[top] = value;
    top++;
}

char pop() {

    if (top==0)
    {
     
        fprintf(stderr,"\n-----UNDERFLOW-----\n");
        return '0';
    }
    

    char popped = stack[top-1];
    top--;
    return popped;
}

void printStack() {
    
    for (int i = 0; i < top; i++)
    {
        printf(";");
        printf("%c",stack[i]);
    }

}

int main() {

    // Initialise stack
    init();

    char str[20];
    printf("\n\n");
    printf("Please enter a string/number => ");
    fgets(str, 20, stdin);
    
    int length = strlen(str)-1;

    for (int i = 0; i < length; i++)
    {
        push(str[i]);
    }

    int i = 0;

    int res = 1;

    while (top!=0)
    {
        char poppedValue = pop();

        if (poppedValue != str[i])
        {
            res = 0;
        }
        i++;
    }

    if(res == 1) {
        printf("PALINDROME");
        printf("\n\n\n");
        return 0;
    }

        printf("NOT PALINDROME\n\n\n");



return 0;
}

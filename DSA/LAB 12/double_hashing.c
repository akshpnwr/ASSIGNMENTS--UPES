#include<stdio.h>
#include<stdlib.h>

struct hash {
    int value;
    struct hash *next;
};

typedef struct hash hash;

#define MAX_SIZE 11 

hash* arr[MAX_SIZE];
int total_cols = 1;

hash* createNode(int value) {

    hash* node = (hash*) malloc(sizeof(hash));
    node->value = value;
    node->next = NULL;

    return node;
}

void init() {
    for (int i = 0; i < MAX_SIZE; i++) arr[i] = createNode(-1); 
}

void insert(int value) {
    if (arr[value%MAX_SIZE]->value == -1) arr[value % MAX_SIZE] = createNode(value);
    
    else {   
        int insertAt = (value % MAX_SIZE + total_cols*(8 - (value % 8) ) ) % MAX_SIZE;
       
        while (arr[insertAt]->value != -1)
        {
            total_cols++;
            insertAt = (value % MAX_SIZE + total_cols*(8 - (value % 8) ) ) % MAX_SIZE;
        }
        
        arr[insertAt] = createNode(value);
    }
}

void display() {
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (arr[i]->value != -1) printf("\n%d",arr[i]->value);
        else printf("\nNULL");

    }
}

int main() {

    init();

    int keys[] = {20,34,45,70,56};

    int keysSize = sizeof(keys)/sizeof(int);

    for (int i = 0; i < keysSize; i++)
    {
        insert(keys[i]);
    }

    display();

return 0;

}

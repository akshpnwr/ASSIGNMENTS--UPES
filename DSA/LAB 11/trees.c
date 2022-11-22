#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct queue {
    struct Node* node;
    struct queue *next;
};

typedef struct queue qu;

qu* front = NULL;
qu* rear = NULL;

qu* createQueueNode(struct Node* node) {
    qu* new = (qu*) malloc(sizeof(qu));
    new->node = node;   
    new->next = NULL;    

    return new;
}

void push(struct Node* node) {
    qu* new = createQueueNode(node);

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
        poppedValue = ptr->node->data;
        ptr->next=NULL;
        free(ptr);
        return poppedValue;
    }
    
}

int isQueueEmpty() {

    if (front == NULL)
    {
        return 0;
    }

    return 1;
    
}

void display() {
    printf("\nQueue : ");
    qu* ptr = front;

    while (ptr!=rear)
    {
        printf("%d ",ptr->node->data);        
        ptr = ptr->next;
    }
    printf("%d ",ptr->node->data);        
    
}

struct Node* createNode(int data) {

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preOrder(struct Node* node) {
    if (node == NULL)
    {
        return;
    }
    
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);

}

void inOrder(struct Node* node) {

    if (node == NULL)
    {
        return;    
    }

    inOrder(node->left);
    printf("%d ",node->data);
    inOrder(node->right);
}

void postOrder(struct Node* node) {

    if(node == NULL) {
        return;
    }

    postOrder(node->left);
    postOrder(node->right);
    printf("%d ",node->data);
}

struct Node* insert(struct Node* root, int data) {

    if (root == NULL)
    {   
        root = createNode(data);
        return root;
    }
    
    push(root);

    while (isQueueEmpty() != 0)
    {
        struct Node* temp = front->node;
        pop();    

        if (temp->left != NULL)
        {
            push(temp->left);
        }
        else {
            temp->left = createNode(data);
            return root;
        }

        if (temp->right != NULL)
        {
            push(temp->right);
        }

        else {
            temp->right = createNode(data);
            return root;
        }
        
    }
    
    
}


int main() {

    struct Node* root = createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);
    root->right = createNode(9);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    printf("\nIn - order traversal : ");
    inOrder(root);
    
    root = insert(root, 12);

    printf("\nIn - order traversal : ");
    inOrder(root);
    
    // printf("Pre - order traversal : ");
    // preOrder(root);
    
    // printf("\nPost - order traversal : ");
    // postOrder(root);

    // struct Node* n1 = createNode(11);
    // struct Node* n2 = createNode(2);
    // struct Node* n3 = createNode(3);
    // struct Node* n4 = createNode(4);
    // struct Node* n5 = createNode(5);
    // struct Node* n6 = createNode(6);

    // root->left

    // printf("Insertion");
    // insert(root,n1);
    // insert(root,n2);
    // insert(root,n3);
    // insert(root,n4);
    // insert(root,n5);
    // insert(root,n6);
    



    // root->left = n1;
    // root->right = n2;
    // n1->left = n3;
    // n1->right = n4;
    // n2->left = n5;
    // n2->right = n6;





return 0;
}

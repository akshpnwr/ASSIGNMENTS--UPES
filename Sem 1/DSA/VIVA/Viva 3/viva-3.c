#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

typedef struct Node Node;
int sum = 0;

Node* createNode(int data) {

    Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inOrder(Node* node) {

    if (node == NULL) return;

    inOrder(node->left);

    printf("%d ",node->data);    

    inOrder(node->right);
}

void printLeaf(Node* node) {

    if (node == NULL) return;    

    printLeaf(node->left);

    if (node->left == NULL && node->right == NULL) printf("%d ",node->data);

    printLeaf(node->right);
}


int getSum(Node* node) {

    if (node == NULL) return sum;    

    getSum(node->left);

    sum += node->data;

    getSum(node->right);
}

Node* insert(Node* root,int data) {

    if (root==NULL)
    {
        Node* node = createNode(data);
        return node;
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
   
    return root;
}

Node* searchNode;
Node* getNode(Node* root, int data) {

    if (root==NULL)
    {
        return NULL;
    }
    
    getNode(root->left, data);
    
    if (root->data == data) {
        searchNode = root;
    }    

    getNode(root->right, data);

    return searchNode;
}

void deleteRoot(Node* root) {
    Node* temp = root->left;
    Node* prev = temp;

    while (temp->right!=NULL)
    {
        prev = temp;
        temp = temp->right;
    }

    printf("\nDeleted successfully.\nNew Node : %d\nPrev node : %d", temp->data,prev->data);
    
    prev->right = NULL;
    root->data = temp->data;

    if (prev->data == temp->data)
    {
        root->left = NULL;
    }
    
    if (temp->left!=NULL)
    {
        prev->right = temp->left;
    }
    

    free(temp);
}
 
int main() {

    Node* root = NULL;

    int choice = 1;
    int checkInput, data;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Display (Inorder traversal)");
        printf("\n2. Insert");
        printf("\n3. Display leaf nodes");
        printf("\n4. Sum of nodes");
        printf("\n5. Delete root");
        printf("\n6. Get node");

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
            printf("Inorder traversal, Binary search tree : ");
            inOrder(root);
            break;
        case 2:
            printf("\n-----------------\n");
            printf("\nEnter data to insert : ");
            scanf("%d",&data);
            root = insert(root, data);
            printf("\nData inserted succesfully!");
            break;
        case 3:
            printf("\n-----------------\n");
            printLeaf(root);
            break;
        case 4:
            printf("\n-----------------\n");
            sum = 0;
            int res = getSum(root);
            printf("Sum of all nodes : %d",res);
            break;
        case 5:
            printf("\n-----------------\n");
            deleteRoot(root);
            break;
        case 6:
            printf("\n-----------------\n");
            printf("Enter value to search in tree : ");
            scanf("%d",&data);
            Node* node = getNode(root, data);
            printf("Node obtained : %d", node->data);
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



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* moveLeft(struct Node* root) {

    if (root->left == NULL)
    {
        printf("\nNO ELEMENT FOUND!!\tMOVE FAILED!!\n");
        return root;
    }

    printf("\nMOVE LEFT SUCCESSFULLY\n");
    return root->left;
}

struct Node* moveRight(struct Node* root) {

    if (root->right == NULL)
    {
        printf("\nNO ELEMENT FOUND!!\tMOVE FAILED!!\n");
        return root;
    }
    printf("\nMOVE RIGHT SUCCESSFULLY\n");
    return root->right;
}

struct Node* insertAtLeft(struct Node* root) {

    if (root->left == NULL)
    {
        int data;
        printf("Enter data of the node : ");
        scanf("%d",&data);

        struct Node* new = createNode(data);

        root->left = new;
        printf("\nInsertion successful...\n");
    }

    else {
        printf("\nNode already exist at left\nInsertion aborted...\n");
        return root;
    }
        
        
}

struct Node* insertAtRight(struct Node* root) {

    if (root->right == NULL)
    {
        int data;
        printf("Enter data of the node : ");
        scanf("%d",&data);

        struct Node* new = createNode(data);

        root->right = new;
        printf("\nInsertion successful...\n");
    }

    else {
        printf("\nNode already exist at right\nInsertion aborted...\n");
        return root;
    }
        
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

void deleteCurrent(struct Node* root, struct Node* node) {

    struct Node* temp = root;

    while (temp->right!=NULL)
    {
        temp = moveRight(temp);
    }

    node->data = temp->data;
    free(temp);

}

void checkMultiples(struct Node* node) {
    if (node == NULL)
    {
        return;    
    }

    checkMultiples(node->left);

    if (node->data % 3 == 0)
    {
        node->data = 5;
    }
    
    checkMultiples(node->right);
}

int main() {
    int choice = 1;
    int checkInput;

    int data;
    printf("Enter data of the root node : ");
    scanf("%d",&data);

    struct Node* root = createNode(data);

    struct Node* rootNode = root;

    printf("\nIn - order traversal : ");
    inOrder(root);

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Current Node ");
        printf("\n2. Move left");
        printf("\n3. Move right");
        printf("\n4. Insert at left");
        printf("\n5. Insert at right");
        printf("\n6. Delete current node");
        printf("\n7. Traverse - Pre-order");
        printf("\n8. Traverse - In-order");
        printf("\n9. Traverse - Post-order");
        printf("\n10. Reset");
        printf("\n11. Replace multiples of 3 with 5");


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
            printf("Current node : %d", root->data);
            break;
        case 2:
            printf("\n-----------------\n");
            root = moveLeft(root);
            printf("\n%d",root->data);
            break;
        case 3:
            printf("\n-----------------\n");
            root = moveRight(root);
            printf("\n%d",root->data);
            break;
        case 4:
            printf("\n-----------------\n");
            insertAtLeft(root);
            break;
        case 5:
            printf("\n-----------------\n");
            insertAtRight(root);
            break;
        case 6:
            printf("\n-----------------\n");
            deleteCurrent(rootNode,root);
            break;
        case 7:
            printf("\n-----------------\n");
            preOrder(rootNode);
            break;
        case 8:
            printf("\n-----------------\n");
            inOrder(rootNode);
            break;
        case 9:
            printf("\n-----------------\n");
            postOrder(rootNode);
            break;
       case 10:
            printf("\n-----------------\n");
            printf("\nReset successful...Moved to root node\n");
            root = rootNode;
            break;
        case 11:
            printf("\n-----------------\n");
            checkMultiples(rootNode);
            printf("\nReplaced successfully\n");
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

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <ctype.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data) {

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inOrder(struct Node* node) {

    if (node == NULL)
    {
        return;    
    }

    inOrder(node->left);
    printf("%c ",node->data);
    inOrder(node->right);
}

void replace(struct Node* node) {

    if (node == NULL)
    {
        return;    
    }

    replace(node->left);

    char ch = node->data;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        node->data = 'Z';
    }
    
    replace(node->right);
}


int main() {

    struct Node* root = createNode('b');

    struct Node* rootNode = root;
    root->left = createNode('a');
    root->left->left = createNode('c');
    root->right = createNode('e');
    root->right->left = createNode('o');
    root->right->right = createNode('x');
    printf("Before replacing : ");
    inOrder(root);
    replace(root);
    printf("\nAfter replacing : ");
    inOrder(root);

return 0;
}

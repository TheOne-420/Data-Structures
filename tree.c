#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    
    
}node;

node* createNode(node *n, int value)
{

    if (n==NULL)
    {
        n = (node*)malloc(sizeof(node));
        n->data = value;
        n->left = n->right = NULL;
        return n;
        
    }
    else if (n->data > value)
    {
        n->left = createNode(n->left, value);
        return n;
    }
    else if (n->data < value)
    {
        n->right = createNode(n->right, value);
        return n;
    }
    
}
node* insertNode(node *n)
{
    int value;
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
     n = createNode(n, value);
}
void printTree(node *n)
{
        if (n == NULL) return;
    
        printTree(n->left);
        printf("%d ", n->data);
        printTree(n->right);
}
int main()
{
    int choice;
    node *root = NULL;
    do
    {
        system("cls");        
        printf("\n1. Insert Node\n2. Print\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            root = insertNode(root);
            break;
        case 2:
            printTree(root);
            break;
        
        default:
            printf("Invalid option");
        }
      
       getch();
    } while (choice !=3);
    
}
#include "stdio.h"
#include "stdlib.h"

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node* insertAtEnd(Node *head)
{
    int data;
    Node *temp, *newNode;

    printf("Enter value:\n");
    scanf("%d", &data);

    // Create a new node
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) // If the list is empty
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL) // Traverse to the last node
            temp = temp->next;
        temp->next = newNode; // Append the new node at the end
    }
    return head;
}

void printList(Node* head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void intersection(Node* h1, Node* h2)
{
    Node *result = NULL;
    Node *t1,*t2, *t3;
    Node *newNode;

    t1 = h1;
    t2 = h2;

    while (t1!=NULL)
    {
        t2 = h2; // Reset t2 to the beginning of the second list each time we check t1's data.
       while (t2!=NULL)
       {
        if (t1->data == t2->data)
        {
            newNode = (Node*)malloc(sizeof(Node));
            newNode->data = t1->data;
            newNode->next = NULL;

            if (result==NULL) result = newNode;

            else
            {
                newNode->next = result->next;
                result->next = newNode;
            }
        }
         t2 = t2->next;
       }
       t1= t1->next;
    }
    printList(result);
}
void unionList(Node* h1, Node* h2)
{
    Node *result = NULL;
    Node *t1,*t2, *t3;
    Node *newNode;

    t1 = h1;
    t2 = h2;

    while (t1!=NULL && t2!=NULL)
    { 
        newNode = (Node*)malloc(sizeof(Node));
        if (t1->data == t2->data)
        {  
            newNode->data = t1->data;
            newNode->next = NULL;

            t1= t1->next;
            t2= t2->next;
        }
        else
        {
            if (t1->data < t2->data)
            {
               
                newNode->data = t1->data;
                newNode->next = NULL;
                t1= t1->next;
            }
            else
            {
                newNode->data = t2->data;
                newNode->next = NULL;
                 t2= t2->next;
            }
        }
        
        if (result==NULL) result = newNode;
        else 
        { 
            newNode->next = result->next;
            result->next = newNode;
        }
    }   
    while (t1 != NULL)
    {
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = t1->data;
        newNode->next = NULL;
        t1= t1->next;
        newNode->next = result->next;
        result->next = newNode;
    }
    while (t2 != NULL)
    {
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = t2->data;
        newNode->next = NULL;
        t2= t2->next;
        newNode->next = result->next;
        result->next = newNode;
    }
    
    printList(result);
};
int main()
{
    Node *head = NULL; 
    Node *head2 = NULL; 

    //List One
    head = insertAtEnd(head);
    head = insertAtEnd(head);
    //head = insertAtEnd(head);

     //List two
    head2 = insertAtEnd(head2);
    head2 = insertAtEnd(head2);
    //head2 = insertAtEnd(head2);

    unionList(head, head2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
  int value;
  struct Node *next;
} Node;
Node* head=NULL;
Node* tail=NULL;

void insert()
{   
    int value;
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("insert value:");
    scanf("%d",&value);

    if (head==NULL)
    {
        head = (Node *)malloc(sizeof(Node));
        head->value = value;
        head->next=head;
        tail=head;
    }
    else if (head->next==head)
    {
        head->next = (Node *)malloc(sizeof(Node));
        head->next->value = value;
        head->next->next=head;
        tail=head->next;
    }
    else
    {
        temp = (Node *)malloc(sizeof(Node));
        
        temp->value = value;
        temp->next = head;
        tail->next=temp;
        tail = temp;

        temp=NULL;
        free(temp);
    }
    
}
void print(Node *t)
{
    do
    {
        printf("%d->",t->value);
        t=t->next;
    }while (t->next!=head);
    printf("%d->",t->value);
    
}
void main()
{
    insert();
    insert();
    insert();
    insert();
    print(head);
}
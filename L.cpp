
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data ;
    struct Node* next;
};

void print_data(struct Node* head)
{
    if(head==NULL)
    cout<<"Linked list is empty.";
    
    struct Node* ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}

void count_of_Node(struct Node* head)
{
    if(head == NULL)
        cout<<"Linked list is empty.";
    int count = 0;
    struct Node* ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    cout<<count<<endl;
}

int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 45;
    head->next = NULL;
    
    struct Node* current = NULL;
    current = (struct Node*)malloc(sizeof(struct Node));
    current->data = 98;
    current->next = NULL;
    head->next = current;

    current = (struct Node*)malloc(sizeof(struct Node));
    current->data = 3;
    current->next = NULL;
    head->next->next = current;

    print_data(head);

    count_of_Node(head);
    return 0;
}
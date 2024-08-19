#include <iostream>
#include <stdio.h>

struct Node
{
    int id;
    struct Node* Next;
}*head;
void insert()
{
    int value;
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter value\n");
    scanf("%d", &value);
    temp->id = value ;
    temp->Next = head;
    temp=head;
    
}
void display( )
{
    struct Node* temp =  head;
    while (temp != NULL)
    {
        std::cout  << "Data: " << temp->id << " Link: " << temp->Next << std::endl;
        temp = temp->Next;
    }
    free(temp);
}
int main(int argc, char* args[]) 
{
    head->id = 100;
    head->Next = NULL;

 
    std::cout  << "Data: " << head->id << " Link: " << head->Next << std::endl;
    insert();  
    display();

    
    free(head);
   
}


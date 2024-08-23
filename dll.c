#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int id;
    struct Node* next;
    struct Node* prev;
}*head=NULL, *tail=NULL,*temp;

void insertAtStart()
{
    int value;
    temp = (struct Node*)malloc(sizeof(struct Node));

    //Take input
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    
    temp->id = value;
    temp->next = NULL;
    temp->prev = NULL;

    //If list is empty
    if (head==NULL)
    {   
        head = temp;
        tail = temp;  
    }
      
    // Insert at the beginning
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
     
}
void insertAtEnd()
{
    int value;
    temp = (struct Node*)malloc(sizeof(struct Node));

    //Take input
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    
    temp->id = value;
    temp->next = NULL;
    temp->prev = NULL;

    if (tail==NULL)
    {
        tail = head = temp;
    }
    else
    {
        
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
     
}
void insertAtPos()
{
    int value, pos, i=1;
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    temp = (struct Node*)malloc(sizeof(struct Node));
   
    
    //Take input
    printf("Enter position you want to insert at: ");
    scanf("%d", &pos);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

    if (head==NULL) 
    {
        printf("Empty list\n "); 
        return;
    }
    
    else
    {
        temp=head;
        while (i<(pos-1) )
        {
            temp = temp->next;
           
            if(temp == NULL)  
            {  
                printf("\n There are less than %d elements", i);  
                return;  
            }
            i++;
        }
        getch();
    }
    
    
    newNode->id = value;
        
        
    temp->next->prev = newNode;
    newNode->next = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    
}
void deleteNodeAtStart()
{
    if (head==NULL)
    {
        printf("List is empty.\n");
        
    }
    if(head->next==NULL)
    {
        free(head);
        head = tail = NULL;
        return;
    }
    printf("Deleting:%d.\n", head->id);
    temp = head;
    head = head->next;
    head->prev = NULL;

    free(temp);
    getch();

}
void deleteNodeAtEnd()
{
    if (head==NULL)
    {
        printf("List is empty.\n");  
        getch();  
    }
    else if(tail->prev==NULL) 
    {
        printf("Deleting:%d.\n", tail->id);

        free(tail); 
        tail=head=NULL;
       
        getch();
       
    }
    else
    {
        printf("Deleting:%d.\n", tail->id);
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
        getch();
    }
  
}
void deleteNodeFromPos()
{
    int pos, i=1;
    struct Node* current = (struct Node*) malloc(sizeof(struct Node));
    temp = head;

    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    //If list is empty or position is 1
    if (head == NULL )
    {
       printf("Empty list.\n");
       getch();
       return;
    }
    else if (head->next == NULL || pos <= 1)
    {
        free(head);
        head = tail = NULL;
        printf("Deleting.\n");
        getch();
        return;
    }
    //Reaching the specified position
  while (i<pos)
  {
    i++;
    printf("Deleting.\n");

    if (temp == NULL)
    {
        printf("Position out of range.\n");
        getch();
        return;
    }
    
    temp = temp->next;
  }
  if (temp->next == NULL)
  {
    // If the node to be deleted is the last node
    tail = temp->prev;
    tail->next = NULL;
    free(temp);
    return;
  }
  
    //Update the next link of previous node to next node of current node
    current = temp->prev;
    current -> next = temp->next;
    temp->next->prev = current;

    //Alternative way
    // temp->prev->next = temp->next;
    // temp->next->prev = temp->prev;

    free(temp);
    
}

void insert()
{
    int choice;
    printf("Choose the method of inserting\n");
    printf("1. Insert at start\n");
    printf("2. Insert at end\n");
    printf("3. Insert at a specific position\n");
    scanf("%d", &choice);
    switch (choice) 
    {
            
                    case 1:
                            insertAtStart();
                            break;
                    case 2:
                            insertAtEnd();
                            break;
                    case 3:
                            insertAtPos();
                            break;
                    
                    default:
                        printf("Not a valid choice\n");
                        break;
            }
}
void display()
{
        
          int choice;
            
            printf("Choose the method of displaying\n");
            printf("1.Display from start\n");
            printf("2.Display from back\n");
            scanf("%d", &choice);
            switch (choice) 
            {
            
                    case 1:
                            system("cls");
                            temp = head;
                            while (temp!= NULL)
                                {
                                    printf("%d -> ", temp->id);
                                    temp = temp->next;
                                }
                                printf("NULL\n");
                                break;
                    case 2:
                        system("cls");
                        temp = tail;
                        while (temp!= NULL)
                                {
                                    printf("%d -> ", temp->id);
                                    temp = temp->prev;
                                }
                                printf("NULL\n");
                                break;
                    
                    default:
                        printf("Not a valid choice\n");
                        break;
            }
            
            getch();
   
        
}

void deleteNode()
{
    int choice;
            
        printf("Choose the method of displaying\n");
        printf("1.Delete from start\n");
        printf("2.Delete from back\n");
        printf("3.Delete from specific position\n");
        scanf("%d", &choice);





        switch (choice) 
            {
                case 1:
                   deleteNodeAtStart();
                    break;
                case 2:
                    deleteNodeAtEnd();
                    break;
                case 3:
                    deleteNodeFromPos();
                    break;
                    
                    default:
                        printf("Not a valid choice\n");
                        break;
            }
            
            getch();
}
int main()
{
    int choice;

    do
    {
        system("cls");
        printf("\n--------------------------------\n");
        printf("1. Insert node\n");
        printf("2. Display\n");
        printf("3. Delete \n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         
        printf("\n--------------------------------\n");

        switch (choice)
        {
        case 1:
            system("cls");
            insert();
            break;
        case 2:
            system("cls");
            display(); 
            break;
        case 3:
            system("cls");
            deleteNode(); 
            break;
      
        default:
            break;
        }
       
    } while (choice != 6);
    
}
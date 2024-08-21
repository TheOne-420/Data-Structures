#include <stdio.h>
#include <stdlib.h>

struct Node {
  int id;
  struct Node *next;
} * head=NULL;


void insertNodeAtEnd() 
{
  int value;
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  printf("Enter value: ");
  scanf("%d", &value);

  newNode->id = value;
  newNode->next = NULL;
  

  if (head == NULL)
  {
    
    head = newNode;
    printf("Node inserted\n");
    return;
  }
  
   
  temp=head;
  //Reach end of list
  while (temp->next != NULL) 
  {
    temp = temp->next ;
  }
  //Assign at end
  temp->next = newNode;
  printf("Node inserted\n");
 
}
void insertNodeAtStart() {
  int value;
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &value);
  if (head == NULL)
  {
   
    head->id = value;
    head->next=NULL;
    printf("Head inserted\n");
    return;
  }
 

  temp->id = value;
  temp->next = head;
  head = temp;
}
void deleteNodeAtStart() 
{
  if (head == NULL)
  {
     printf("List is empty\n");
     return;
  }
  
  struct Node *temp = head;
  //Assign next node to head
  head = temp->next;

//Free 1st node
  free(temp);
}
void deleteNodeAtEnd() 
{
  if (head == NULL)
  {
    printf("List is empty\n");
    return;

  }
  if (head->next == NULL)
  {
    free(head);
    head = NULL;
    return;
  }
  
  
  struct Node *temp = head;
  struct Node *current = temp;
  while (temp->next != NULL) 
  {
    current = temp;
    temp = temp->next;
  }
  current->next = NULL;
  free(temp);
}
void insert()
{
   int choice;
   
   printf("Where do you want to insert\n");
   printf("Insert at front\n");
   printf("Insert at end\n");
   scanf("%d", &choice);
   switch (choice) {
   {
   case 1:
      insertNodeAtStart();
    break;
   case 2:
      insertNodeAtEnd();
    break;
   
   default:
     printf("Not a valid choice\n");
    break;
   }
}
}
void deleteNode()
{
   int choice;
   
   printf("Where do you want to delete from?\n");
   printf("Delete from front\n");
   printf("Delete from end\n");
   scanf("%d", &choice);
   switch (choice) {
   {
   case 1:
      deleteNodeAtStart();
    break;
   case 2:
      deleteNodeAtEnd();
    break;
   
   default:
     printf("Not a valid choice\n");
    break;
   }
}
}
void display() 
{
  // Check if list is empty
  if (head == NULL)
    {
      printf("List is empty\n");
      return;
    }

  struct Node *temp = head;

  printf("Displaying list\n");
  while (temp != NULL) 
  {
    printf(" %d->", temp->id);
    temp = temp->next;
  }
}


int main() {
  int choice;

  do 
  {
    printf("\n--------------------------------\n");
    printf("1. Insert node\n");
    printf("2. Display\n");
    printf("3. Delete \n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
     printf("\n--------------------------------\n");
    switch (choice) {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
          deleteNode();
          break;
        case 4:
            printf("Quitting\n");
            break;
        default:
              printf("Not a valid option\n");
            break;
    }
   

  } while (choice != 4);
  free(head);
  return 0;
}
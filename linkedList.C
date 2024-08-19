#include <stdio.h>
#include <stdlib.h>

struct Node {
  int id;
  struct Node *next;
} * head;

void insertNode() {
  int value;
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

  printf("Enter value: ");
  scanf("%d", &value);

  temp->id = value;
  temp->next = head;
  head = temp;

  
}
void display() 
{
  // Check if list is empty
  if (head == NULL)
    return;

  struct Node *temp = head;

  while (temp != NULL) 
  {
    printf("Value %d\n", temp->id);
    temp = temp->next;
  }
}
void deleteNode() {
  struct Node *temp = head;
  struct Node *current = temp;
  while (temp->next != NULL) 
  {
    current = temp;
    temp = temp->next;
  }
}
int main() {
  int choice;
  head = (struct Node *)malloc(sizeof(struct Node));
  head->id = 12;
  head->next = NULL;

  do 
  {
    printf("1. Insert node\n");
    printf("2. Display\n");
    printf("3. Delete\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insertNode();
            break;
        case 2:
            display();
            break;
        case 3:
            deleteNode();
            break;
        default:
            break;
    }
  } while (choice != 4);
  return 0;
}
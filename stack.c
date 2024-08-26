#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 3 
int stack[SIZE];
int top=-1;

void push()
{
    //Check if stack is full
    if(top==SIZE)
    {
        printf("Stack Overflow\n");
        //Return if stack is full
        return;
    }
    int item;
    if (top==-1)
    {
        top = 0;
    }
    
    printf("Enter the item to push: ");
    scanf("%d", &item);

    //Insert item at top
    printf("%d", top);
    stack[top]=item;
    top++;  
    printf("%d inserted successfully\n", item);
}
void dequeue()
{
    //Check if stack is empty
    if(top<0)
    {
        printf("Stack Underflow\n");
        //Return if stack is empty
        return;
    }
    printf("Deleted item: %d\n", stack[top]);
    top--;
}
void display()
{
    int i;
    //Check if stack is empty
    if(top==-1)
    {
        printf("Stack is empty\n");
        //Return if stack is empty
        return;
    }
    printf("Stack elements are: ");
    for( i=0; i<top; i++)
    {
        
        printf("%d ", stack[i]);
        printf("I:%d ", i);
    }
    
    printf("\n");
}
void update()
{
    int index, item;
    if (top < 0)  { printf("Stack underflow\n"); return; }
    printf("Enter the index of the item to update: ");
    scanf("%d", &index);

   if (index >= top || index<0) { printf("Index out of range\n"); return; }

   
    printf("Enter the new item: ");
    scanf("%d", &item);
    stack[index] = item;
}
void peep()
{
    int item, i,flag=0;

    if (top < 0)
   {
        printf("Stack underflow\n"); 
        return;    
   }

    printf("Enter the item to search: ");
    scanf("%d", &item);
  
   
    for(i=0; i<=top; i++)
    {
        if(stack[i]==item)
        {
            printf("Item found at index: %d\n", i);
            //Set to true if item found
            flag=1;
        }
    }
    if(flag==0) printf("Item not found in the stack\n");
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. Insert\n2. Display\n3. Delete\n4. Update \n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
         
            // Insert an element into the stack
            system("cls");
            push();
            getch();
            break;
        
        case 2:
            system("cls");
            display();
            getch();
            break;
        
        case 3:
            system("cls");
            dequeue();
            getch();
            break;
        
        case 4:
            system("cls");
            update();
            getch();
            break;
        
        case 5:
            system("cls");
            peep();
            getch();
            break;
        case 6:
         printf("Quitting\n");
         break;
        default:
        printf("Invalid choice\n");

        }
    } while (choice!=6);
    
 
}
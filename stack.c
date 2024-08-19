#include <stdio.h>
#include <conio.h>
#define SIZE 3 
int stack[SIZE];
int top=0;

void push()
{
    //Check if stack is full
    if(top==SIZE)
    {
        printf("Stack Overflow\n");
        //Return if stack is full
        return;
    }
    int item, i;

    printf("Enter the item to push: ");
    scanf("%d", &item);

    //Insert item at top
    stack[top]=item;
    top++;  
    printf("Item inserted successfully\n");
}
void pop()
{
    //Check if stack is empty
    if(top==0)
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
    //Check if stack is empty
    if(top==0)
    {
        printf("Stack is empty\n");
        //Return if stack is empty
        return;
    }
    printf("Stack elements are: ");
    for(int i=0; i<top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}
void update()
{
    int index, item;
    printf("Enter the index of the item to update: ");
    scanf("%d", &index);
   
    printf("Enter the new item: ");
    scanf("%d", &item);
    stack[index] = item;
}
void peep()
{
    int item, i,flag=0;
    printf("Enter the item to search: ");
    scanf("%d", &item);
   
    for(i=0; i<top; i++)
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
void main()
{
    int choice;
    do
    {
        printf("\n1. Insert\n2. Display\n3. Delete\n4.Update \n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Insert an element into the stack
            push();
            break;
        
        case 2:
            display();
            break;
        
        case 3:
            
            pop();
            break;
        
        case 4:
          
            update();
            break;
        
        case 5:
          
            peep();
            break;
        case 6:
         printf("Quitting\n");
         break;
        default:
        printf("Invalid choice\n");

        }
    } while (choice!=6);
    
 
}
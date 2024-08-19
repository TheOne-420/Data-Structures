#include <stdio.h>
#include <conio.h>

#define SIZE 3 
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue()
{
    int value;
   if (rear == SIZE) 
   {
        printf("Queue is full.\n");
        return;
   }
   if (front == -1)
    front = 0;
    //Taking input
    printf("Enter value to insert\n");
    scanf("%d", &value);
    //Insert value at rear/end
    rear++;
    queue[rear] =  value;
    

}
void display()
{
    int i;
    if (rear == -1 || front == SIZE)
    {
      printf("Queue is empty.\n");
      return;
    }

    printf("Printing values of the queue");

    for (i  = front; i < rear; i++)
    {
       printf("%d ", queue[i]);
    }
    printf("\n");
}
void dequeue()
{
    //Check if the queue is empty from front or back
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Deleting\n");
    front++;

}
void update()
{

}
void peep()
{

}
int main()
{


    int choice;
    do
    {
        printf("1. Push\n2. Display\n3. Delete\n4.Update \n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
          
            // Insert an element into the stack
            enqueue();
            break;
        
        case 2:
            display();
            break;
        
        case 3:
            
            dequeue();
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

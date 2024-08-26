#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
        //reset queue
        front=-1;
        
   }
   if (front == -1)
   {
      front = 0;
      rear = 0;
   }
   
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
    if (rear == -1 || front == SIZE - 1)
    {
      printf("Queue is empty.\n");
      return;
    }

    printf("Printing values of the queue");

    for (i  = front; i <= rear; i++)
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
        system("cls");
        printf("1. Push\n2. Display\n3. Delete\n4.Update \n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
          
            system("cls");
            // Insert an element into the stack
            enqueue();
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
         system("cls");
         printf("Quitting\n");
         getch();
         break;
        
        default:
        printf("Invalid choice\n");

        }
    } while (choice!=6);
    
 
}

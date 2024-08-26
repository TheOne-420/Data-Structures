#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 3 
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue()
{
   int value,r;
   if (front == 0 && rear == SIZE-1 || (rear+1)%SIZE == front)  
   {
         r= (rear+1)%SIZE;
        printf("%d:", r);
        printf("Queue is full.\n");
        return;
   }
   //Taking input
    printf("Enter value to insert\n");
    scanf("%d", &value);

    //Queue is empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    //Queue is full
    else if (rear==SIZE-1)
    {
        rear = 0;
    }
    else
    {
        //Insert value at rear/end
        rear++;
        queue[rear] =  value;
    }
    
}
void display()
{
    int i,j;
    if (rear == front == -1)
    {
      printf("Queue is empty.\n");
      return;
    }

    if (front > rear)
    {
        printf("Printing values of the queue\n");
        for (i  = front; i < SIZE; i++)
        {
             printf("%d ", queue[i]);
        }
        for (j  = 0; j <= rear; j++)
        {
             printf("%d ", queue[j]);
        }
    }
    else
    {
        printf("Printing values of the queue\n");
        for (i  = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
           
        }
    }
    
 
    printf("\n");
}
void dequeue()
{
    //Check if the queue is empty 
    if (front == rear == -1 )
    {
        printf("Queue is empty.\n");
        return;
    }
    //Front reached end of the queue
    if (rear == front )
    {
       rear =  front = -1;
    }
    else if (front == SIZE-1)
    {
        front = 0;
    }
    else
    {
        front++; 
        printf("Deleting\n");
    }

   

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
        printf("1. Push\n2. Display\n3. Delete\n4. Update \n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
          
            // Insert an element into the stack
            system("cls");
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
         printf("Quitting\n");
         break;
        default:
        printf("Invalid choice\n");

        }
    } while (choice!=6);
    
 
}

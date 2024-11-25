#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int value;
    struct Stack* next;
}Stack;

typedef struct Queue
{
    int value;
    struct Queue* next;
}Queue;

Queue* queue=NULL;
Stack* stack;

void push()
{
    int value;
    Stack* temp;

    printf("Enter value: ");
    scanf("%d", &value);

    if (stack==NULL) 
    {
        stack = (Stack*) malloc(sizeof(Stack));
        stack->value = value;
        stack->next = NULL;
    }
    else if (stack->next == NULL)
    {
        stack->next = (Stack*) malloc(sizeof(Stack));
        stack->next->value = value;
        stack->next->next = NULL;
        stack  = stack->next;
    }
    else
    {
        temp = (Stack*) malloc(sizeof(Stack));
        temp->value = value;
        temp->next = stack->next;
        stack->next = temp;
    }
}
void displayStack(Stack* stack)
{
    while (stack!=NULL)
    {
        printf("%d->", stack->value);
        stack=stack->next;
    }
    printf("NULL\n");

}

void enqueue()
{
    int value;
    Queue* temp;
    printf("Enter value: ");
    scanf("%d", &value);

    if (queue==NULL)
    {
        queue = (Queue*) malloc(sizeof(Queue));
        queue->value=value;
        queue->next=NULL;
    }
   
    else
    {
        temp = (Queue*) malloc(sizeof(Queue));
        
        temp->value=value;
        temp->next=queue;
        queue=temp;
    }
}
void dequeue()
{
    if (queue==NULL)
    {
       printf("Queue is empty\n");
       return;
    }
    else
    {
        Queue* temp = queue;
        queue = queue->next;
        temp->next = NULL;
        free(temp);
        
    }
}
void displayQueue(Queue* q)
{
    while (q!=NULL)
    {
        printf("%d-",q->value);
        q=q->next;
    }
    printf("\n");
}
int main()
{
  
  enqueue();
  enqueue();
  enqueue();
  displayQueue(queue);
  dequeue();
  displayQueue(queue);
  return 0;
}
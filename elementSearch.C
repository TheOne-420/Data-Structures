#include <stdio.h>
#include <conio.h>
#define SIZE 5 
int arr[SIZE];

void inputArray()
{
    int i;
    for ( i = 0; i < SIZE; i++)
    {
        printf("Enter value at %d: ", i);
        scanf("%d", &arr[i]);
    }
    
}
void printArray()
{
    int i;
    printf("Printing array\n");
    for ( i = 0; i < SIZE; i++)
    { 
        printf("Value: %d at index %d\n", arr[i],i);   
    }
    
}
void sortArray()
{
    int i,j,temp;
    for ( i = 0; i < SIZE - 1; i++)
    {
        for ( j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //Swap
                temp = arr[j+1]; 
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
           
        }
        
    }
}
void linearSearch()
{
    int i,value;
    int flag=0;
    sortArray();

    printf("Enter value you want to search: ");
    scanf("%d",&value);

    for ( i = 0; i < SIZE; i++)
    {
        
        if (arr[i] == value)
        {
           
            printf("Value %d found at %d\n", arr[i], i);
           flag = 1;
        }
        
    }
    if (flag==0) printf("No value found\n");
    
    
}
void binarySearch()
{
    int key, left, right, middle;
    left = 0;
    right = SIZE - 1;
   

    printf("Enter value you wanna search: ");
    scanf("%d",&key);

    while(left<=right)
    {
        middle = (left+right)/2;
       if (arr[middle] == key)
       {
            printf("Value %d found at %d\n", key, middle);
            return;
       }
       
       else if (key > arr[middle])
       { 
          //Ignore left side of middle
            left = middle + 1;
         
       }
        else
        {
             //Ignore right side of middle
           right = middle - 1;
            
        }
    }
    
}
int main()
{
    int choice;
    
    inputArray();

    do
    {
        printf("Which search do you want to perform?\n");
        printf("1: Linear search\n");
        printf("2: Binary search\n");
        printf("3: Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
           linearSearch();
            break;
        case 2:
           binarySearch();
            break;
        
        default:
            break;
        }
    } while (choice!=3);
    
    printArray(); 
       
    
}
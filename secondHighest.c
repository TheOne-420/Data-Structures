#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
int arr[SIZE];

void inputArray()
{
    int i;

    system("cls");

    printf("Enter elements of array\n");

    //Taking input
    for ( i = 0; i < SIZE; i++)
    {
        printf("Pos:%d\n" , i);
        scanf("%d",&arr[i]);
        
        
    }
}
void printArray()
{
    int i;

    system("cls");

    printf("Elements of array\n");

    
    for ( i = 0; i < SIZE; i++)
    {
        printf("Element:%d at:%d\n" , arr[i],i);  
    }
}
void secondHighest()
{
   
    int i, j, max, secondMax;
    
    system("cls");

    for ( i = 0; i < SIZE; i++)
    {

        //Assign if current element is larger

        if(arr[i] > max)
        { 
            max = arr[i];
        }
    }   

    for ( j = 0; j < SIZE; j++)
    {
        //Skip if current element is the max number
        if (arr[j] == max) continue;
 
        //Assign if current element is larger
        if(arr[j] > secondMax)
        { 
            secondMax = arr[j];
        }
    }   
    printf("Second highest element is: %d\n", secondMax);
    printf("Highest element is: %d\n",max);
    
    getch();
}
void main()
{   
    inputArray();
    secondHighest();
    printArray();
}
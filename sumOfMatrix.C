#include <stdio.h>
#include <conio.h>
#define SIZE 2
//Declaring row and column because they are common in all functions
int row,column, arr[SIZE][SIZE];

void inputArray()
{
   
    printf("Enter elements of array\n");

    //Taking input
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("Row: %d Column: %d\n" ,row,column);
           scanf("%d",&arr[row][column]);
        }
        
    }
}
void printArray()
{
   
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("%d ", arr[row][column] ,row,column);
        }
        printf("\n");
    }
}
void sumOfArray()
{
    int sum=0;
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            //Add current value to to sum variable
            sum += arr[row][column] ;
        }
       
    }
    printf("Sum:%d\n", sum);
}
int main()
{
    inputArray();
    printArray();
    sumOfArray();
    
}
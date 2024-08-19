#include <stdio.h>
#include <conio.h>
#define SIZE 2
//Declaring row and column because they are common in all functions
int row,column, arr[SIZE][3];

void inputArray()
{
   
    printf("Enter elements of array\n");

    //Taking input
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < 3; column++)
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
        for ( column = 0; column < 3; column++)
        {
            printf("%d ", arr[row][column] ,row,column);
        }
        printf("\n");
    }
}
void sumOfRowsNCols()
{
    for ( row = 0; row < SIZE; row++)
    {
        
        int rowSum=0;
        for ( column = 0; column < 3; column++)
        {
            rowSum += arr[row][column];
        }
       printf("Sum of row %d :%d \n", row,rowSum);
    }
    for ( row = 0; row < 3; row++)
    {
        int columnSum=0;
        for ( column = 0; column < SIZE; column++)
        {
            columnSum += arr[column][row];
        }
       printf("Sum of column %d :%d \n", row,columnSum);
    }
     
     
}
int main()
{
    inputArray();
    printArray();
    sumOfRowsNCols();
    
}
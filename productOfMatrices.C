#include <stdio.h>
#include <conio.h>
#define SIZE 2
//Declaring row and column because they are common in all functions
int row,column, arr[SIZE][SIZE],  arr2[SIZE][SIZE], arr3[SIZE][SIZE];

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
    printf("Enter elements of 2nd array\n");
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("Row: %d Column: %d\n" ,row,column);
           scanf("%d",&arr2[row][column]);
        }
        
    }
}
void printArray()
{
    printf("Matrix\n");
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("%d ", arr3[row][column] ,row,column);

        }
        printf("\n");
    }
   
}
void productOfArray()
{
    int i,j,k;
   
    for ( i = 0; i < SIZE; i++)
    {
        for ( j = 0; j < SIZE; j++)
        {
             arr3[i][j] = 0;
            for ( k = 0; k < SIZE; k++)
            { 
                 arr3[i][j] += arr[i][k] * arr2[k][j] ;
            }   
        }
        
    }
}
int main()
{
    inputArray();
    productOfArray();
    printArray(); 
}
#include <stdio.h>
#include <conio.h>
#define SIZE 2
//Declaring row and column because they are common in all functions
int row,column, arr[SIZE][SIZE],  transpose[SIZE][SIZE];

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
    printf("Matrix\n");
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("%d ", arr[row][column] ,row,column);

        }
        printf("\n");
    }
    printf("Transposed matrix\n");
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            printf("%d ", transpose[row][column] ,row,column);
        }
        printf("\n");
    }
}
void transposeArray()
{
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
             transpose[column][row] = arr[row][column];
        }
    }
}
int main()
{
    inputArray();
    transposeArray();
    printArray(); 
}
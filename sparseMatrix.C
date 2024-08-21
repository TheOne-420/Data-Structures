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
void sparseMatrix()
{
    int noOfZeros;
    int noOfElements =  SIZE * SIZE;
    for ( row = 0; row < SIZE; row++)
    {
        for ( column = 0; column < SIZE; column++)
        {
            if (arr[row][column]==0) 
            {
                  noOfZeros++;
            }
          
        
        }
       
    }
    if (noOfZeros>=noOfElements)
    {
       printf("MAatrix is sparse");
    }
    
    
}
int main()
{
    inputArray();
    printArray();
    sparseMatrix();
    
}
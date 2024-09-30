#include <stdio.h>
#include <conio.h>
#define SIZE 5 
int arr[SIZE],b[3];

void inputArray()
{
    int i;
    for ( i = 0; i < SIZE; i++)
    {
        printf("Enter value at %d: ", i);
        scanf("%d", &arr[i]);
    }
    
}
void printArray(int a[] , int n)
{
    int i;
   
    printf("Printing array\n-------------------\n");
    for ( i = 0; i < n; i++)
    { 
        printf("Value: %d at index %d\n", a[i],i);   
    }
    printf("-------------------\n");
}
void swap (int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}
void binarySearch(int key)
{
   
  
}

int main()
{
   
}
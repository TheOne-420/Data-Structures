#include "stdio.h"
#include "stdlib.h"

void swap (int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
};

void selectionSort(int a[], int len)
{
    int i,j, min;
    
    for (i = 0; i < len; i++)
    {
        
        min = i;
        for ( j = i+1; j < len; j++)
        {
            if (a[min] > a[j])
            {
               min = j;
            }
            
        }
        if (min!=i)
        {
            swap(&a[min], &a[i]);
        }
        
    }
    
}
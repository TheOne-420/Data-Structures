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
        printf("%d ", a[i]);
    }
    printf("\n-------------------\n");
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
    printArray(a, len);
}
void insertionSort(int a[], int len)
{
    
    int i,j;
    
    for (i = 0; i < len; i++)
    {
       j=i+1;
       while (j>0 && a[j-1] > a[j])
       {
         swap(&a[j], &a[j-1]);
         j--;
       }
        
    }
    printArray(a, len);
}
int partition(int a[], int left,int right, int pivot)
{
    while (left <= right)
    {
        while(a[left] < pivot) left++;
        while(a[right] > pivot) right--;

        // If pointers havent crossed swap
        if (left <= right)
        {
            swap(&a[left], &a[right]);
            left++;
            right--;
        }

    }
    
    return left;
}
void quickSort(int a[], int start,int end)
{
    if (start < end)
    {
        //Take mid element as Pivot
        int pivot = a[(start + end)/2];
        int pivotIndex = partition(a, start,end, pivot);

        //Left half of the pivot
        quickSort(a, start, pivotIndex-1);
        //right half of pivot including the pivot
        quickSort(a, pivotIndex, end);
    }
}
void merge(int a[], int start, int middle ,int end)
{
    int i,j,k,temp[(end-start)+1];
    i = start;
    j= middle+1;
    k=0;

    while (i<=middle && j<=end)
    {
       if (a[i] <= a[j])
       {
        temp[k] = a[i];
        i++;
       }
       else 
       {
        temp[k] = a[j];
        j++;
       }
       k++; 
    }
    while(i<=middle)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    k=0;

    for ( i = start; i <= end; i++)
    {
        a[i] = temp[k];
        k++;
        
    }
    
}
void mergeSort(int a[], int start,int end)
{
    int middle;
    if (start < end)
    {
        middle = (start - end)/2;
        mergeSort(a, start, middle-1);
        mergeSort(a, middle, end);
        merge(a, start, middle, end);
    }
    
}

int main()
{
    int arr[] = {2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0,n);
    printArray(arr, n);
}
    

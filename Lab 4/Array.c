// Write a program to input and display elements of a 1D array.
#include<stdio.h>
int arr[5],i;
int main()
{
    for(i=0;i<5;i++)
    {
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Value at index %d = %d\n",i,arr[i]);
    }
}
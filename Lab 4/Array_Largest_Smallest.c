// Write a program to find the largest and smallest elements in an array.
#include<stdio.h>
int main()
{
    int arr[5],i,greatest=0,lowest=0;
    
    for(i=0;i<5;i++)
    {
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    lowest=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
        if(arr[i]<lowest)
        {
            lowest=arr[i];
        }
    }
    printf("The largest number in the array is : %d\n",greatest);
    printf("The largest number in the array is : %d\n",lowest);
}
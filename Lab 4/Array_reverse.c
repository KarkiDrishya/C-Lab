// Create a program to reverse the elements of an array.
#include<stdio.h>
int main()
{
    int arr[5],arr2[5],i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0,j=4;i<5,j>=0;i++,j--)
    {
        arr2[j]=arr[i];
    }
    for(i=0;i<5;i++)
    {
        printf("The reversed array at index number %d is : %d\n",i,arr2[i]);
    }
}
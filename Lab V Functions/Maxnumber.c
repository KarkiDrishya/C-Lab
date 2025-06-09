// Create a function findMax(int arr[], int size) that takes an array and returns the maximum element. 
#include<stdio.h>
int findmax(int arr[])
{
    int i,great=0,low=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>great)
        {
            great = arr[i];
        }
    }
    return great;
}
int main()
{
    int arr[5],i,greatest,low;
    for(i=0;i<5;i++)
    {
        printf("Enter numbers : ");
        scanf("%d",&arr[i]);
    }
    greatest=findmax(arr);
    printf("The largest number in the array is : %d\n\n",greatest);
}
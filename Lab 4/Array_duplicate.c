// Find and display duplicate elements in an array
#include<stdio.h>
int main()
{
    int arr[5],i,j,duplicates=0,count=0;

    for(i=0;i<5;i++)
    {
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicates=arr[i];
                printf("The duplicate number is  %d \n",duplicates);
            }
        }
    }
}
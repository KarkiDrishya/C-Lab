// Implement a program to search for a specific element in an array and display its index.
#include<stdio.h>
int main()
{
    int arr[5],i,value;
    
    for(i=0;i<5;i++)
    {
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("What value do you want to search? : ");
    scanf("%d",&value);

    for(i=0;i<5;i++)
    {
        if(arr[i]==value)
        {
            printf("The value you are searching for is at index : %d\n",i);
            break;
        }
    }
    printf("You have reached the end of program");
}
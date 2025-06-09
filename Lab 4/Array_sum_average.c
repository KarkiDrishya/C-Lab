// Write a program to find the sum and average of elements in an array.
#include<stdio.h>
int main()
{
    int arr[5],i,sum,avg;

    for(i=0;i<5;i++)
    {
        printf("Enter value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    avg = sum/5;
    printf("The sum of all the elements in the arrays is : %d\n",sum);
    printf("The average of all the elements in the arrays is : %d\n",avg);
}
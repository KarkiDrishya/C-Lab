// 1.Write a C program to declare an integer pointer, assign it the address of an integer variable, and print the value of the variable using the pointer.
#include<stdio.h>
int main()
{
    int n; 
    int *a;

    printf("Enter any number : ");
    scanf("%d",&n);

    *a=n;

    printf("The value is : %d",*a);

}
// Create a C program that swaps two numbers using pointers.
#include<stdio.h>
int main()
{
    int x,y,*a,*b,temp;

    printf("Enter of a : ");
    scanf("%d",&x);
    printf("Enter of b : ");
    scanf("%d",&y);

    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf(" The value of a is : %d ",*a);
    printf(" The value of b is : %d ",*b);
}
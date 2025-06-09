// Write a program to demonstrate pointer arithmetic by incrementing and decrementing a pointer.
#include<stdio.h>
int main()
{
    int x=10, *a;
    a=&x;
    printf("Value of p1 : %d\n",a);
    a++;
    printf("Value of p1 : %d\n",a);
    printf("Value of p1 : %d\n",++a);
    printf("Value of p1 : %d\n",a++);
    printf("Value of p1 : %d\n",--a);
    printf("Value of p1 : %d\n",a--);
    printf("Value of p1 : %d\n",a);
}
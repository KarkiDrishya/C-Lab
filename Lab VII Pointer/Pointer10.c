//10) Create a C program that swaps two pointers instead of swapping values.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1, b = 2;
    int *ptr1 = &a;
    int *ptr2 = &b;

    int *ptrtemp = ptr1;

    ptr1 = ptr2;
    ptr2 = ptrtemp;

    printf("ptr1 prints: %d \nptr2 prints: %d",*ptr1,*ptr2);
}
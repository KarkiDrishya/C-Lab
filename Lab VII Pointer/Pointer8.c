//8) Write a C program to reverse an array using pointers.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int rev[5];
    int j=4;

    for(int i=0; i<5; i++){
        rev[i] = *(ptr+j);
        j--;
    }

    for(int i=0;i<5;i++){
        printf("%d ",rev[i]);
    }

} 
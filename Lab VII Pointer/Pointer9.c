//9) Implement a function that takes an array and its size as parameters and returns the sum of elements using pointers.
#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int size){
    int sum = 0;
    int *ptr = arr;
    for(int i=0;i<size;i++){
        sum+= *(ptr + i);
    }

    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5}; 
    int size = sizeof(arr)/sizeof(int);

    printf("The sum of the array is: %d",sum(arr,size));
}
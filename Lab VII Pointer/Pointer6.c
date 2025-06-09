//6) Write a C program that dynamically allocates memory for an integer array, fills it with values, and prints them using pointers.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}
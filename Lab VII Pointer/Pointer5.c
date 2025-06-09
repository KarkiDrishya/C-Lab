// Implement a program that takes an array of integers as input and prints its elements using pointer notation.
#include <stdio.h>

int main() {
    int n;
    
    // Ask for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n
    int *ptr = arr; // Pointer to the first element of the array

    // Input elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); // Using pointer notation to store values
    }

    // Print elements using pointer notation
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Access elements using pointer
    }

    printf("\n");
    return 0;
}

// Write a function reverseString(char str[]) to reverse a given string.
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        // Swap characters
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input without spaces

    reverseString(str);
    
    printf("Reversed string: %s\n", str);

    return 0;
}
// WAP to convert decimal number to binary number
#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);  // Recursive call
    }
    printf("%d", n % 2);  // Print remainder (binary digit)
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary equivalent: ");
    decimalToBinary(num);
    printf("\n");

    return 0;
}
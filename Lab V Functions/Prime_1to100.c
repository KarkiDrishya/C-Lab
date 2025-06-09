#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible, not a prime
    }
    return 1; // Prime number
}

// Function to print all prime numbers less than 100
void printPrimesBelow100() {
    printf("Prime numbers less than 100:\n");
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printPrimesBelow100();
    return 0;
}

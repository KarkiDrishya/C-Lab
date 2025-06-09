//7) Create a function that takes a pointer to an integer and modifies its value inside the function.
#include <stdio.h>
void modifyValue(int *ptr) {
    *ptr = 100;
}
int main() {
    int num = 50;
    printf("Before modification: %d\n", num);

    modifyValue(&num);

    printf("After modification: %d\n", num);
    return 0;
}
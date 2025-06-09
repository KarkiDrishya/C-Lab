// Declare a pointer to a character and assign it a string. Print the string using the pointer.
#include <stdio.h>

int main() {
    char *ptr,str[]="Hello world!";
    ptr=str;
    printf("%s\n", ptr);

    return 0;
}
//1) Write a C program to create a text file named data.txt and write "Hello, World!" into it.
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;

    ptr = fopen("hello.txt","w");

    fprintf(ptr,"Hello, World!");

    fclose(ptr);
}
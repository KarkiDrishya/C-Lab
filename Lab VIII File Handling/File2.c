//2) Write a C program to read and display the contents of an existing file using fgetc().
#include <stdio.h>
int main() {
    FILE *file;
    
    file = fopen("hello.txt", "r");

    if (file == NULL) {
        printf("Could not open file!!!Error!");
        return 1; 
    }

    while (!feof(file)){
        char ch=fgetc(file);
        printf("%c",ch);
    }

    fclose(file);
    return 0;
}
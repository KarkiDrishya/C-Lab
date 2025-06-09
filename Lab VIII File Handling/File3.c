//3) Implement a program that writes an array of integers to a file and then reads the file to display the numbers.
#include <stdio.h>
int main() {
    FILE *file;
    int arr[5] = {1,2,3,4,5};

    file = fopen("hello.txt", "w");

    for (int i = 0; i < 5; i++) {
        fprintf(file, "%d\t", arr[i]);
    }

    fclose(file);

    file = fopen("hello.txt", "r");
    while (!feof(file)){
        char ch=fgetc(file);
        printf("%c",ch);
    }

    fclose(file);
    return 0;
}

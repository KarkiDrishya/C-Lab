//6) Write a program to append user-inputted text to an existing file.
#include<stdio.h>
int main(){
    FILE *file;
    char addedtext[100];
    file =fopen("hello.txt","a");
    printf("Enter text to be added: ");
    gets(addedtext);
    fputs(addedtext,file);
    fclose(file);
}
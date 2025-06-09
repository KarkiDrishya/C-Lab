//7) Implement a program that takes a file name as input, checks if the file exists, and displays an appropriate message.
#include<stdio.h>
int main(){
    char filename[100];
    printf("Enter file name: ");
    scanf("%s",filename);

    FILE *file;

    file = fopen(filename,"r");

    if(file == NULL){
        printf("File doesnot exist.");
    }else{
        printf("File Exists");
    }
    fclose(file);
    return 0;
}
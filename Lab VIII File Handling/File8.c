//8) Implement a program that reads student details (name, roll number, marks) from a file and displays them in a formatted way.
#include<stdio.h>
int main(){
    char name[25];
    int roll;
    float marks;
    FILE *file;
    file=fopen("scores.txt","r");
    while(fscanf(file,"%s %d %f",name,&roll,&marks)!=EOF){
    printf("Name:%s\t Roll:%d \tMarks:%.2f\n",name,roll,marks);
    }
    fclose(file);
    return 0;
}
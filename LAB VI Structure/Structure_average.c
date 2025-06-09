// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
#include<stdio.h>
struct Student{
    char name[20];
    int age;
    float marks;
};
struct Student display(struct Student s1[],float avg_final)
{
    for(int i=0;i<2;i++)
    {
        printf("%s\n%d\n%.2f\n",s1[i].name,s1[i].age,s1[i].marks);
    }
    printf("Average of marks : %.2f\n",avg_final);
}
int average(struct Student s1[])
{
    float avg;
    avg=(s1[0].marks+s1[1].marks)/2.0;
    return avg;
}
int main()
{
    struct Student s1[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter Name : ");
        scanf("%s",s1[i].name);
        printf("Enter Age : ");
        scanf("%d",&s1[i].age);
        printf("Enter Marks : ");
        scanf("%f",&s1[i].marks);
    }
    float avg_final=average(s1);
    display(s1,avg_final);
}
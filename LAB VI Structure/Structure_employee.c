// 5.Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.
#include<stdio.h>
struct employee{
    int ID,salary;
    char name[20];
};
int main()
{
    struct employee e[3];
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter employee ID : ");
        scanf("%d",&e[i].ID);
        printf("Enter employee name : ");
        scanf("%s",e[i].name);
        printf("Enter employee salary : ");
        scanf("%d",&e[i].salary);
    }
    printf("The employee with the highest salary is :\n");
    if(e[0].salary>e[1].salary && e[0].salary>e[2].salary)
    {
        printf("%d\t %s\t %d\n",e[0].ID,e[0].name,e[0].salary);
    }
    if(e[1].salary>e[0].salary && e[1].salary>e[2].salary)
    {
        printf("%d\t %s\t %d\n",e[1].ID,e[1].name,e[1].salary);
    }
    if(e[2].salary>e[0].salary && e[2].salary>e[1].salary)
    {
        printf("%d\t %s\t %d\n",e[2].ID,e[2].name,e[2].salary);
    }
}
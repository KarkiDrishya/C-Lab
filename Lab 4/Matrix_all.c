// Perform addition, subtraction, and multiplication of two 2D arrays (matrices).
#include<stdio.h>
int add(int a[2][2],int b[2][2],int c[2][2]);
int sub(int a[2][2],int b[2][2],int c[2][2]);
int prod(int a[2][2],int b[2][2],int c[2][2]);
int add(int a[2][2],int b[2][2],int c[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    return c[i][j];
}

int sub(int a[2][2],int b[2][2],int c[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    return c[i][j];
}

int prod(int a[2][2],int b[2][2],int c[2][2])
{
    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return c[i][j];
}

int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,sum[2][2],diff[2][2],mult[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter value at [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter value at [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    add(a,b,sum);
    printf("Addition of the matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    sub(a,b,diff);
    printf("Subtraction of the matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
    prod(a,b,mult);
    printf("Multiplication of the matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
}


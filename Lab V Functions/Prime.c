#include<stdio.h>
int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int result = prime(n);
    if (result == 1)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is composite");
    }
}
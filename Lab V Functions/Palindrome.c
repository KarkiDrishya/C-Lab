// WAP to find the reverse of a number and check whether it is a palindrome or not.
#include<stdio.h>
int palindrome(int number)
{
    int originalnumber,rem,i,b=0;
    originalnumber=number;
    while(number>0)
{
rem=number%10;
b=b*10+rem;
number=number/10;
}
}
int main()
{
    int number,rem,i,b=0,originalnumber;
    printf("Enter any number : ");
    scanf("%d",&number);
    palindrome(number);

    if(b==originalnumber)
{
    printf("The number is palindrome");
}
else{
    printf("The number is not palindrome");
}
}
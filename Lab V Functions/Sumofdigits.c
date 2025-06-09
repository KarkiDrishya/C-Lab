// WAP to find the sum of the digit of the inputted number.
#include<stdio.h>
int sum(int num)
{
    int i,val,sum=0;
        for(i=num;i>0;i/=10)
        {
        val=num%10;
        sum+=val;
        num/=10;
        }
        return sum;
    }
int main()
{
    int num,final_sum;
    printf("Enter Number : ");
    scanf("%d",&num);
    final_sum=sum(num);
    printf("The sum of the digits of the number is : %d",final_sum);
}
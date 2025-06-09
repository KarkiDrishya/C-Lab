// Implement a function isArmstrong(int num) that returns 1 if the number is an Armstrong number and 0 otherwise. 
#include<stdio.h>
#include<math.h>
int isarmstrong(int num)
{
    int rem,count,orignum,i,b=0;
    orignum=num;

    while(orignum!=0)
    {
        orignum=orignum/10;
        count=count+1;

    }
    orignum=num;
    while(orignum!=0)
    {
        rem=orignum%10;
        b=b+pow(rem,count);
        orignum/=10;
    }
    if(b==num)
    {
        printf("%d is armstrong",num);
    }
    else{
        printf("%d is not armstrong",num);
    }
}
int main()
{
    int rem,count,num,orignum,i,b=0;
    printf("Enter any number");
    scanf("%d",&num);
    isarmstrong(num);
    
}
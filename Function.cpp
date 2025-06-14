#include<iostream>
using namespace std;
void area(int x,int y);
int main()
{
    int x=20,y=20;
    area(x,y);
}
void area(int x,int y)
{
    int sum;
    sum=x+y;
    cout<<"The value is : "<<sum;
}
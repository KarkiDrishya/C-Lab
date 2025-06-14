#include<iostream>
using namespace std;
int area(int x );
double area(double x,int y);
long area(long x,int y, int z);
int main()
{
    cout<<area(10)<<endl;
    cout<<area(2.5,8)<<endl;
    cout<<area(100,75,15)<<endl;
    return 0;
}
int area(int x)
{
    int result_area = 22/7*x*x;
    return result_area;
}
double area(double x, int y)
{
    double result_area = x*y;
    return result_area;
}
long area(long x, int y, int z)
{
    long  result_area = x*y*z;
    return result_area;
}

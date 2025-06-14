#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b,c;
    float d=45.6,f=78.9;
    cout<<"Enter values of a and b:"<<endl;
    cin>>a>>b;
    c=pow(a,b);
    cout<<b<<" To the Power of " <<a<<":"<<c<<endl;
    cout<<" Square root of " <<a<<":" <<sqrt(a)<<endl;
    cout<<" Ceiling  of " <<a<<":" <<ceil(d)<<endl;
    cout<<" Floor  of " <<a<<":" <<floor(d)<<endl;
}

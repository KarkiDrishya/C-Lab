#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter any string : ";
    cin.get(str,30,'#');
    cout<<str;
    return 0;
}
#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
    int x=10;
    int *ptrx=&x;
    int y=20;
    int *ptry=&y;
    swap(ptrx,ptry);
    cout<<"Calling function"<<endl<<x<<endl<<y<<endl;
    return 0;
}
void swap(int *x,int *y)
{
    cout<<"Called function"<<endl;
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<*x<<endl<<*y<<endl;
}
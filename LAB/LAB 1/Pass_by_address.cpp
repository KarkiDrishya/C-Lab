/*7.Write a C++ program to demonstrate parameter passing mechanism using pass by address method.*/
#include<iostream>
using namespace std;
class change{
    public:
    
    void change_func(int a,int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;

        cout<<"Value of b inside function is  : "<<a<<endl;
        cout<<"Value of a inside function is  : "<<b<<endl;
    }

};

int main()
{
    change c1;
    int a=5;
    int b=6;

    c1.change_func(&a,&b);

    

}

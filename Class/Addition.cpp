#include<iostream>
using namespace std;
class addition{
    private:
    int num1,num2;
    public:
    void setdata(int a, int b)
    {
        num1=a;
        num2=b;
    }
    int add()
    {
        int sum = num1+num2;

        cout<<"Output is : "<<sum<<endl;
        
    }
    

};
int main()
{
    addition a1,a2;
    int a_main,b_main;
    cout<<"Enter first number : ";
    cin>>a_main;
    cout<<"Enter second number : ";
    cin>>b_main;

    a1.setdata(a_main,b_main);
    a1.add();


}
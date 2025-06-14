/*3.Write a program which takes two numbers as input from user and determines which is the larger
of the two numbers. The Program should also tell which of the entered numbers is even or odd.*/
#include<iostream>
using namespace std;
class number{
    private :
    int number1,number2;

    public:
    void setdata(int num1,int num2)
    {
        number1=num1;
        number2=num2;
    }
    void getdata()
    {
        cout<<number1<<endl;
        cout<<number2<<endl;
    }

    int compare()
    {
        if(number1>number2)
        {
            cout<<number1<<" is the greater number"<<endl;
        }
        else if(number1==number2){
            cout<<"Both the numbers are equal"<<endl;
        }
        else{
            cout<<number2<<" is the greater number"<<endl;
        }
    }
    int even_odd()
    {
        if(number1%2==0)
        {
            cout<<number1<<" is even"<<endl;
        }
        else{
            cout<<number1<<" is odd"<<endl;
        }

        if(number2%2==0)
        {
            cout<<number2<<" is even"<<endl;
        }
        else{
            cout<<number2<<" is odd"<<endl;
        }
    }

};
int main()
{
    number n1;
    int num1,num2;
    cout<<"Enter number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter number 2 : "<<endl;
    cin>>num2;

    n1.setdata(num1,num2);
    n1.getdata();
    n1.compare();
    n1.even_odd();
}
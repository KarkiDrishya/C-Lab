/*You need to design a calculator that performs four basic arithmetic operations. You will write a
program that takes two numbers as input from the user. It then displays a list of arithmetic
operations. The user selects one operation and the program displays the result of the
corresponding operation. The program should also display which of the two input numbers is
greater and which is smaller. Use do-while loop.*/

#include<iostream>
using namespace std;
class calculator{
    private:
    int num1,num2;

    public:
    void setdata(int number1,int number2)
    {
        num1=number1;
        num2=number2;
    }
    void add()
    {
       cout<<"Sum of two numbers are : "<<num1+num2<<endl; 
    }
    void sub()
    {
        cout<<"Difference of two numbers are : "<<num1-num2<<endl;
    }
    void mul()
    {
        cout<<"Product of two numbers are : "<<num1*num2<<endl;
    }
    void div()
    {
        cout<<"Qutient of two numbers are "<<num1/num2<<endl;
    }
};
int main()
{
    calculator c1;
    int number1,number2,choice;
    char choice2;

    do{
    
    cout<<"Enter number 1 : ";
    cin>>number1;

    cout<<"Enter number 2 : ";
    cin>>number2;

    cout<<"1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division";
    cin>>choice;

    c1.setdata(number1, number2);
    
    switch (choice)
    {
    case 1:
        c1.add();
        break;

    case 2:
        c1.sub();
        break;

    case 3:
        c1.mul();
        break;

    case 4:
        c1.div();
        break;
    
    default:
        cout<<"You did not choose from option 1-4"<<endl;
        break;
    }
    
    
    cout<<" Do you want to continue ? Y for Yes, N for No : ";
    cin>>choice2;
    }
    while(choice2=='Y');
}
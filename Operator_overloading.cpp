#include<iostream>
using namespace std;
class Complex{
    private:
    int real, imaginary;
    public:
    Complex(){}
    Complex(int rl, int im )
    {
        real=rl;
        imaginary=im;
    }
    void getdata()
    {
        cout<<real<<"+"<<imaginary<<"j"<<endl;
    }
    Complex operator +(Complex c2) //c1 is implicitly passed(automatically passed), so no need to type c1.real.Opertor overloading is done to give additional power to operators like +,-,* etc. Normally these operators only work on pre defined data types and not user defined data types like we defined 'Complex'. The first word Complex is not a constructor but the return type of the function.
    {  
        Complex temp;
        temp.real=real+c2.real;
        temp.imaginary=imaginary+c2.imaginary;
        return temp;
    }

    Complex operator -(Complex c2) 
    {  
        Complex temp;
        temp.real=real-c2.real;
        temp.imaginary=imaginary-c2.imaginary;
        return temp;
    }

    //Increment :

    Complex operator ++() //c1 is implicitly passed(automatically passed), so no need to type c1.real.Opertor overloading is done to give additional power to operators like +,-,* etc. Normally these operators only work on pre defined data types and not user defined data types like we defined 'Complex'. The first word Complex is not a constructor but the return type of the function.
    {  
        real=real+1;
        imaginary=imaginary+1;
        getdata();
    }
};
int main()
{
    Complex c1(2,2),c2(3,3),c3;
    c3=c1+c2;//no need to function call operator +. when + is seen, the function triggers itself. The obejct which is left of + is itself implicitly passed.
    c3.getdata();
    c3=c1-c2;
    c3.getdata();
    ++c1;
    return 0;
}
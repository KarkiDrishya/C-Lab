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


    friend Complex operator +(Complex c1, Complex c2);//Declaration of Friend function with operator overloading
    friend Complex operator -(Complex c1, Complex c2);
    friend Complex operator ++(Complex c1);
};

Complex operator +(Complex c1, Complex c2) //Defining function outside the class because it is not the memeber function
    {  
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
    }
Complex operator -(Complex c1, Complex c2) 
    {  
        Complex temp;
        temp.real=c1.real-c2.real;
        temp.imaginary=c1.imaginary-c2.imaginary;
        return temp;
    }
    //Increment :

Complex operator ++(Complex c1) 
    {  
        c1.real=c1.real+1;
        c1.imaginary=c1.imaginary+1;
    }


int main()
{
    Complex c1(2,2),c2(3,3),c3;
    c3=c1+c2;//Function calling, while using friend function and operator overloading at once, you cannot pass the object implicitly because friend function is not a memeber function of the class.
    c3.getdata();
    c3=c1-c2;
    c3.getdata();
    ++c1;
    c1.getdata();
    return 0;
}
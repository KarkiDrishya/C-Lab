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
        cout<<real<<"+"<<imaginary<<"j";
    }
    Complex add2Numbers(Complex c1, Complex c2)
    {
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1(2,2),c2(3,3),c3;
    c3=c3.add2Numbers(c1,c2);
    c3.getdata();
    return 0;
}
//Friend function is used to access private data from a class
#include<iostream>
using namespace std;
class EquilateralTriangle{
    private:
    float a,circumference, area;
    public:
    void setA(float length)
    {
        a=length;
        circumference=a*3;
        area=(1.73*a*a)/4;
    }
    friend void printResult(EquilateralTriangle);//Declaration of friend function
};
void printResult(EquilateralTriangle e_placeholder){//Friend function is not a member function of class so it is made outside the class and before the main function. e_placeholder is variable exclusive to this function only, it doesnt have to be same variable as the variable you are calling from the function.

    cout<<"circumference is : "<<e_placeholder.circumference<<endl;
    cout<<"area is : "<<e_placeholder.area;
}
int main()
{
    EquilateralTriangle et;
    et.setA(3);
    printResult(et);
    return 0;
}
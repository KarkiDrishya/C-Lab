/*5.Write a C++ program to calculate the area of rectangle, square using function overloading.*/

//Function overloading is the process where two or more than function can have the same name as long as their number of parameters/arguments or their data types are different. When two or more functions share the same name, but with different parameters, number of parameters and type of parameters, the function is said to be overloaded
#include<iostream>
using namespace std;
class Area{
    private:
    int length_class, breadth_class;
    public:
    void area_final(int length, int breadth)
    {
        cout<<"Area of reactangle is : "<< length*breadth<<endl;
    }
    void area_final(int length)
    {
        cout<<"Are of square is :"<<length*length<<endl;
    }
    
};
int main()
{
    Area a1;
    int length,breadth;
    cout<<"Input length : ";
    cin>>length;
    cout<<"Input breadth : ";
    cin>>breadth;

    a1.area_final(length,breadth);
    a1.area_final(length);
    
}
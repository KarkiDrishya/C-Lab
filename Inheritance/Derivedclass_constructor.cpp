//Default constructor can be used by child class because it does not have any parameter. But when we need to use parameter constructor of a parent class through child class, you cannot because you need parameters.
#include<iostream>
using namespace std;
class Parent{
    protected:
    int x,y,z;
    public:
    Parent(){//Default constructor
        cout<<" I am default parent constructor"<<endl;
    }
    Parent(int p_x, int p_y){//Paremeterized constructor
        cout<<"Paremetrized constructor";
        this ->x=p_x;
        this ->y=p_y;
    }
    void getdata(){
        cout<<x<<y;
    }
};
class Child: public Parent{
    public:
    Child()//Here you dont have to pass to the base class because no parameters
    {
        cout<<" I am default child constructor";
    }
    Child(int a, int b, int c) : Parent(a,b){//Here a and b are passed to the base class because the base class consist of two paremeters.
        this->z=c;
    }
    void getdata(){
        Parent::getdata();
        cout<<z<<endl;
    }
};
int main()
{
    Child c1(10,20,30);
    c1.getdata();
}
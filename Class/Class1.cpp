#include<iostream>
using namespace std;
class student{
    private://Doesnt let outside the class to acess these two variables.
    string name;
    int roll;

    public://Lets outside access this function. This is how encapsulation works. Selective hiding
    void setData(string stname, int stroll)
    {
        name= stname;
        roll=stroll;
    }
    void getData(){
        cout<<name<<roll<<endl;
    }
};
int main()
{
student s1,s2;
s1.setData("Drishya",100);
s1.getData();

s2.setData("Shreyansh",200);
s2.getData();

}
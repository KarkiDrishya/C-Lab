#include<iostream>
using namespace std;
class Student{
    int roll;string name;
    public:
    Student(){//Default constructor where there is no parameter.
        cout<<"I am a default constructor"<<endl;
    }
    Student(int rn, string nm)//Pareamterized constructor
    {
        roll=rn;name=nm;    
    }
    Student(Student & s)//Copy constructor
    {
    roll=s.roll;
    name=s.name;
    }
    void display(){
        cout<<"Name:"<<name<<'\t'<<"roll no:"<<roll<<endl;
    }

};
int main()
{
    Student s1;//Default constructor is called.
    Student s2(100,"Drishya");//Paremterised Constructor called
    Student s3(s2);
    Student s4=s3;
    s2.display();
    s3.display();
    s4.display();
    return 0;
}
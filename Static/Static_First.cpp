#include<iostream>
using namespace std;
//When declaring static keyword, it creates somewhat like a copy. When you declare static, the object you called from declaring, you will always get the same value.So when calling the value, you dont need to type the object, you can type the class name : and the function name to call the function as seen in line no. 25
class Student{
    public:
    int rollno;
    static string college;
    static void printroll(){
        cout<<college;
    }
    void printname(){
        cout<<rollno<<college;
    }
};

string Student::college="ABC";

int main()
{
    Student s1,s2;
    s1.rollno=100;s2.rollno=200;
    cout<<s1.rollno<<"\t"<<s1.college<<endl;cout<<s2.rollno<<"\t"<<s2.college<<endl;
    Student::college="XYZ";
    cout<<s1.college<<endl;cout<<s2.college;
    Student::printroll();
    s1.printname();
}
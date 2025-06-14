#include<iostream>
using namespace std;
class rectangle//For construction, the name of construction and class should be the same
{
    private:
    int length;
    int breadth;
    public:
    rectangle()
    {
        length=breadth=10;
    }
    void getData(){
        cout<<length<<endl<<breadth<<endl;
    }
    rectangle(int x);
};
rectangle::rectangle(int x)
{
    length=breadth=x;
}
int main()
{
rectangle r1(100),r2;
r1.getData();
}
#include<iostream>
using namespace std;
class Distance{
    private:
    int feet, inches;
    public:
    Distance(){
        feet=0,inches=0;
    }
    Distance(int x, int y)
    {
        feet=x;inches=y;
    }
    void showdistance(){
    cout<<"Feet: "<<feet<<'\t';
    cout<<"Inches"<<'\t'<<inches<<endl;
    }
    void adddistance(Distance d1, Distance d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
    }
    
    Distance adddistance2(Distance d1, Distance d2)//Returning objects from function:
    {
        Distance temp;
        temp.feet=d1.feet+d2.feet;
        temp.inches=d1.inches+d2.inches;
        return temp;
    }

};
int main()
{
    Distance d1(3,3),d3,d4;
    Distance d2(2,2);
    d1.showdistance();
    d2.showdistance();
    d3.showdistance();
    d4 = d3.adddistance2(d1,d2);
    d4.showdistance();
    return 0;
}

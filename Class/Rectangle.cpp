#include<iostream>
using namespace std;
class rectangle{  //Start of the class definition

    private: //These variables cannot be accessed anyone other than the function

    int length,width,area;

    public://These functions can be accessed by outside the function

    void setlength(int stlength)//Setting length
    {
        length=stlength;
    }

    void setwidth(int stwidth)//Setting width
    {
        width=stwidth;
    }
    void getlength()//Printing the length
    {
        cout<<length<<endl;
    }
    void getwidth()//Printing the width
    {
        cout<<width<<endl;
    }
    int getarea()//Calculating area
    {
        int area = length*width;
        cout<<area<<endl;

    }
};
int main()//Main function
{
    int lengthmain,widthmain;
    rectangle r[2];
    for(int i=0;i<2;i++)//Using loop to input multiple values
    {
        cout<<"Enter length";
        cin>>lengthmain;//Input in length
        cout<<"Enter width";
        cin>>widthmain;//Input in width
         r[i].setlength(lengthmain);//Passing the input
        r[i].setwidth(widthmain);//Passing the input
        r[i].getarea();//Printing area
        r[i].getlength();//Printing length that you entered
        r[i].getwidth();//Printing Width that you entered
    }
}
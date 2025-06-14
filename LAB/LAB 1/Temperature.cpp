#include<iostream>
using namespace std;
float c2f(float celsius)
{
    float result;

    result=(9.0/5*celsius)+32;
    return(result);
}
float f2c(float fahrenheit)
{
    float result;
    result=(fahrenheit-32)*5.0/9;
    return(result);
}
int main()
{
    float celsius,fahrenheit,ans;
    int choice;
    cout<<"Which value do you want to input?"<<endl;
    cout<<"Enter 1 for celsuis, 2 for fahrenheit : ";

    cin>>choice;

    switch (choice)
    {
    case 1 :
        cout<<"Enter Temperature in Celsius : ";
        cin>>celsius;
        ans=c2f(celsius);
        cout<<"Celsius to Fahrenheit : "<<ans<<endl;
        break;

    case 2 :
        cout<<"Enter Temperature in Fahrenheit : ";
        cin>>fahrenheit;
        ans=f2c(fahrenheit);
        cout<<"Fahrenheit to Celsius : "<<ans<<endl;
    default:
        break;
    }
}
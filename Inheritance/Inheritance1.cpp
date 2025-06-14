#include<iostream>
using namespace std;
class Counter { //Parent class

    protected: //The data is like private : but child class can also access the data defined inside protected:
    int count;

    public:
    Counter()
    {
        count =0;
    }
    Counter(int c)
    {
        count = c;
    }
    
    void getdata(){
        cout<<"Total Students in classroom is :"<<count;
    }
    Counter operator ++(){
        this->count+=1;
        return*this;
    }
};

class CounterDr:public Counter{ //Child class inherits the properties of parent class. So CounterDr can also use the functions made inside parent class Counter. 
        public:
        Counter operator --(){
        this->count-=1; //In this c1 is passed implicitly
        return*this;
    }
};

int main()
{
    CounterDr c1; //While making an object, make an object from within the child class because child class's object can access functions from parent class aswell.
    ++c1;
    ++c1;
    ++c1;
    --c1;
    c1.getdata();
}
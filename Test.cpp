// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;

class base{
public:
    virtual void print(){
        cout << "print base class" << endl;
    }
};

class derived: public base{
    public:
        void print() override{
            cout << "print derived class" << endl;
        };
};


int main()
{

    base b;
    derived d;
    b.print();
    d.print();
    return 0;

}

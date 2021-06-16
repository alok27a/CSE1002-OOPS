// Pure Virtual function is a virtual function with no function definition
// =0
// Abstract class:-Class with aleast 1 pure virtual function
// We cannot create objects of abstract class
// In the derived class pure virtual function should have a function definition and if its not there then derived class will become abstract class
// Constructors cannot have virtual keyword whereas destructor can hav virtual keyword.

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Base
{
public:
    virtual void show()=0;
    virtual void dis()
    {
        cout<<"In base dis"<<endl;
    }
};

class Derived:public Base
{
public:
    void show()
    {
        cout<<"In derived show using pure virtual"<<endl;
    }
    void dis()
    {
        cout<<"In derived dis"<<endl;
    }
};

int main()
{
    Derived d;
    Base *b=&d;
    b->show();
    b->dis();
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout<<"In base show"<<endl;
    }
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
        cout<<"In derived show"<<endl;
    }
    void dis()
    {
        cout<<"In derived dis"<<endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr=&d;
    ptr->show();
    ptr->dis();
    return 1;
}
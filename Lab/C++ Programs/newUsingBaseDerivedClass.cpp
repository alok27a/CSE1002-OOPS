/*Pointer of base class pointing towards derived class*/
/*
Note:-
1) Base class pointer can hold address of derived class but not vice versa.
2) To avoid the calling of base class functions we can use the virtual keyword in base class.
*/


#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Base
{
public:
    virtual void dis()
    {
        cout << "In base dis" << endl;
    }
    virtual void display()
    {
        cout << "In base display" << endl;
    }
};

class Derived:public Base
{
public:
    void dis()
    {
        cout << "In derived dis" << endl;
    }
    void display()
    {
        cout << "In derived display" << endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->dis();
    ptr->display();
    return 1;
}
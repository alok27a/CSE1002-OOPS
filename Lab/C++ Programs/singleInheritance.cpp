#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Base
{
private:
    int data1; // Private data members cannot be inherited
public:
    int data2, data3;
    int getData1()
    {
        cin >> data1;
        return data1;
    }
};

class Derived : public Base
{
private:
    int data4;

public:
    void process();
    void display();
    void getData();
};

void Derived::process()
{
    data4 = data2 * data3;
}

void Derived::display()
{
    int a=getData1();
    cout << a << endl;
    cout << data2 << endl;
    cout << data3 << endl;
    cout << data4 << endl;
}

void Derived::getData()
{
    cin >> data2;
    cin >> data3;
}

int main()
{
    Derived d;
    d.getData1();
    d.getData();
    d.process();
    d.display();
    return 1;
}
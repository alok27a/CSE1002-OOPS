#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Employee
{
    char name[20];
    float acc;
    float amt;
    float interest;
    float loan;
};

class A
{
public:
    Employee e;
    void get_name()
    {
        cin >> e.name;
    }
};
class B : public A
{
public:
    void get()
    {
        cin >> e.acc >> e.amt >> e.interest >> e.loan;
    }
};

class C : public B
{
public:
    void dis()
    {
        cout << e.name << endl
             << e.acc << endl
             << e.amt << endl
             << e.interest << endl
             << e.loan;
    }
};

int main()
{
    C obj;
    obj.get_name();
    obj.get();
    obj.dis();
    return 1;
}
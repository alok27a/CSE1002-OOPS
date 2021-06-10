#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Person
{
protected:
    char name[100];
    int age;
};
class Employee : public Person
{
protected:
    int eid;
};
class PTEmployee : public Employee
{
protected:
    float hr;
    float sal_hr;
    float salary;

public:
    void get()
    {
        cin >> name >> age >> eid >> hr >> sal_hr;
    }
    void cal()
    {
        salary = hr * sal_hr;
    }
    void disp()
    {
        cout << eid << endl;
        cout << salary << endl;
    }
};

int main()
{
    PTEmployee p;
    p.get();
    p.cal();
    p.disp();
    return 1;
}
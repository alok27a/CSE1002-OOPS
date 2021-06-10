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

class Employee
{
protected:
    float sal;
    int eid;
};

class Teacher : public Person, public Employee
{
protected:
    char sub[100];

public:
    void get()
    {
        cin >> name >> age >> sal >> eid;
    }
    void disp()
    {
        cout << name << "\t" << age << "\t" << eid << "\t" << sal << endl;
    }
};
int main()
{
    Teacher t;
    t.get();
    t.disp();
    return 1;
}
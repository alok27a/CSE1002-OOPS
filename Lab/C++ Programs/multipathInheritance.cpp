/* Multipath inheritance ->Diamond problem */
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

class Teacher :virtual public Person
{
protected:
    int eid;
    float sal;
};

class Student : virtual public Person
{
protected:
    int r_no;
};

class TA : virtual public Teacher, virtual public Student
{
protected:
    int noh;

public:
    void get()
    {
        cin >> name >> age >> eid >> sal >> r_no >> noh;
    }
    void disp()
    {
        cout<<name<<"\n"<<age<<"\n"<<noh;
    }
};

int main()
{
    TA t;
    t.get();
    t.disp();
    return 1;
}
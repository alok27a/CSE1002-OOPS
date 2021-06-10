#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
protected:
    char reg_no[100];
    char name[100];
    char dep[100];
};

class InternalMarks : virtual public Student
{
protected:
    float cat1;
    float cat2;
    float q1;
    float q2;
    float assign;
};

class TEE : virtual public Student
{
protected:
    float fat;
};

class Result : virtual public InternalMarks, virtual public TEE
{
protected:
    float internal_marks;
    float final_marks;

public:
    void get()
    {
        cin >> reg_no >> name >> dep >> cat1 >> cat2 >> q1 >> q2 >> assign >> fat;
    }
    void internal_display()
    {
        internal_marks = (cat1 / 2) + (cat2 / 2) + q1 + q2 + assign;
        cout << internal_marks << endl;
    }
    void final_display()
    {
        final_marks = internal_marks + (fat / 100) * 40;
        cout << final_marks << endl;
    }
};

int main()
{
    Result r;
    r.get();
    r.internal_display();
    r.final_display();
    return 1;
}
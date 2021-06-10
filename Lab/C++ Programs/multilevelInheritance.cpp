#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
protected:
    int r_no;

public:
    void set_r_no(int a);
    void get_r_no();
};

void Student::set_r_no(int a)
{
    r_no = a;
}

void Student::get_r_no()
{
    cout << "The roll number is " << r_no << endl;
}

class Exam : public Student
{
protected:
    float math;
    float phy;
    float chem;

public:
    void set_mark(float m1, float m2, float m3);
    void get_mark();
};

void Exam::set_mark(float m1, float m2, float m3)
{
    math = m1;
    phy = m2;
    chem = m3;
}

void Exam::get_mark()
{
    cout << "PHYSICS" << phy << endl
         << "CHEMISTRY" << chem << endl
         << "MATH" << math << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void disp()
    {
        get_r_no();
        get_mark();
        cout << "Your percentage is " << (math + phy + chem) / 3 << endl;
    }
};

int main()
{
    Result r;
    r.set_r_no(7);
    r.set_mark(90, 77, 98);
    r.disp();
    return 1;
}
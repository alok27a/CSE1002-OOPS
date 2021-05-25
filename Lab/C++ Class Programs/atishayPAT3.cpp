#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
protected:
    int rno;

public:
    void getnumber()
    {
        cin>>rno;
    }
    int putnumber()
    {
        return rno;
    }
};

class Sport
{
protected:
    int sp_mark;
public:
    void getsp()
    {
        cin>>sp_mark;
    }
    int putsp()
    {
        return sp_mark;
    }
};

class Test :  public Student
{
protected:
    int sub1, sub2;

public:
    void getmarks()
    {
        cin>>sub1>>sub2;
    }
    int putmarks()
    {
        return sub1+sub2;
    }
};


class Result :  public Test,public  Sport
{
protected:
    int total;

public:
    void dis()
    {
        total=putsp()+putmarks();
        cout<<total;
    }
};

int main()
{
    Result r;
    r.getnumber();
    r.getmarks();
    r.getsp();
    r.dis();
    return 1;
}
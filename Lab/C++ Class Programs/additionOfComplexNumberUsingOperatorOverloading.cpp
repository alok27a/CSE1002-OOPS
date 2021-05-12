#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class complex
{
public:
    float r, i;
    void get();
    void dis();
    complex operator+(complex c1)
    {
        complex c;
        c.r=c1.r+r;
        c.i=c1.i+i;
        return c;
    }
};

void complex::get()
{
    cin >> r >> i;
}

void complex:: dis()
{
    cout << r << " + " << i << "i";
}

int main()
{
    complex c1, c2,c3;
    c1.get();
    c2.get();
    c3=c1+c2;// c3=c1.operator(+)c2
    c3.dis();
    return 1;
}
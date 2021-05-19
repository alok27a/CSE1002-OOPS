// Reg no.-20BCB0128
// Name-Atishay Jain
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class complex
{
public:
    double r, i;
    void get();
    void dis();
    complex operator+(complex c1)
    {
        complex c;
        c.r = c1.r + r;
        c.i = c1.i + i;
        return c;
    }
    complex operator-(complex c1)
    {
        complex c;
        c.r = r - c1.r;
        c.i = i - c1.i;
        return c;
    }
};

void complex::get()
{
    cin >> r >> i;
}

void complex::dis()
{
    if (i > 0)
        cout << fixed << setprecision(1) << r << " + " << i << "j" << endl;
    else
        cout << fixed << setprecision(1) << r << "" << i << "j" << endl;
}

int main()
{
    complex c1, c2, c3, c4;
    c1.get();
    c2.get();
    c3 = c1 + c2; // c3=c1.operator(+)c2
    c4 = c1 - c2;
    c3.dis();
    c4.dis();
    return 1;
}
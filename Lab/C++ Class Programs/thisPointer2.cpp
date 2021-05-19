#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class number
{
    int x, y;
public:
    number &getx(int a)
    {
        x = a;
        return *this;
    }
    number &gety(int b)
    {
        y = b;
        return *this;
    }
    void dis()
    {
        cout << "x= " << x<<"\t" << "y= " << y;
    }
};

int main()
{
    number n;
    n.getx(5).gety(10);
    n.dis();
    return 1;
}
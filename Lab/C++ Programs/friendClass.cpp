#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class addition;
class sub;

class sample
{
    int xx, yy, x, y;

public:
    void get()
    {
        cin >> xx >> yy >> x >> y;
    }
    friend class addition;
    friend class sub;
};

class addition
{
public:
    int a, b;
    void add(sample q)
    {
        a = q.xx + q.x;
        b = q.yy + q.y;
        cout << a << "\t"<< b<<endl;
    }
};

class sub
{
public:
    int a, b;
    void minus(sample q)
    {
        a = q.xx - q.yy;
        b = q.x - q.y;
        cout << a << "\t"<< b<<endl;
    }
};

int main()
{
    sample x;
    addition y;
    sub z;
    x.get();
    y.add(x);
    z.minus(x);
    return 1;
}
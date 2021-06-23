#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Shape
{
protected:
    float a, b, r, h, s;
    float area;

public:
    virtual void getData() = 0;
    virtual void Area() = 0;
    virtual int surfaceArea();
};

class Trapp : public Shape
{

public:
    void getData()
    {
        cin >> a >> b >> h;
    }

    void Area()
    {
        area = 0.5 * (a + b) * h;
        cout << area << endl;
    }
};
class Ellipse : public Shape
{
public:
    void getData()
    {
        cin >> a >> b;
    }

    void Area()
    {
        area = 3.14 * a * b;
        cout << area << endl;
    }
};

class Para : public Shape
{
public:
    void getData()
    {
        cin >> a >> b;
    }

    void Area()
    {
        area = a * b;
        cout << area << endl;
    }
};
class Cone : public Shape
{
public:
    void getData()
    {
        cin >> r >> s;
    }
    int surfaceArea()
    {
        int s_area = 3.14 * r * s + 3.14 * r * r;
        cout << s_area << endl;
        return 1;
    }
    void Area()
    {
        area = 3.14 * r * s;
        cout << area << endl;
    }
};

int main()
{
    Trapp t;
    t.getData();
    t.Area();
    return 1;
}
/*

Shape *s1,*s2,*s3;
Ellipse e;
s1=&e;
s1->getData();
s1->Area();


* /
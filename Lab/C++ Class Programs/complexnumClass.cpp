#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class complex
{
private:
    int r;
    int i;

public:
    void getInp();
    void add(complex o1, complex o2);
};

void complex::getInp()
{
    cin >> r;
    cin >> i;
}
void complex::add(complex o1, complex o2)
{

    cout << o1.r + o2.r << " + " << o1.i + o2.i << "i";
}

int main()
{
    complex c1,c2,s;
    c1.getInp();
    c2.getInp();

    s.add(c1,c2);
    return 1;
}
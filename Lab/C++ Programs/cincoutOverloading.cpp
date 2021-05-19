#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Number{
    int x,y,z;
    public:
    friend istream& operator>>(istream& in,Number& n)
    {
        in>>n.x;
        in>>n.y;
        return in;
    }
    friend ostream& operator <<(ostream& out,Number& n)
    {
        out<<n.x<<"\t"<<n.y;
    }
};
 
int main()
{

    return 1;
}
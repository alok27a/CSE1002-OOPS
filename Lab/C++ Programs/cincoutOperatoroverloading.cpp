// cin & cout operator are always overloaded by friend function

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Number{
    int x,y;
    public:
    friend void operator >>(istream& in, Number& n)
    {
        in>>n.x;
        in>>n.y;
    }
    friend void operator <<(ostream& out,Number& n)
    {
        out<<n.x<<endl;
        out<<n.y<<endl;
    }
};

int main()
{
    Number n;
    cin>>n;
    cout<<n;
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Number
{
private:
    int lim;
    int *ptr;
public:
    Number()
    {
        cin>>lim;
        ptr=new int[lim];
        for (int i = 0; i < lim; i++)
        {
            cin>>*(ptr+i);
        }
    }
    ~Number()
    {
        delete[] ptr;
    }
    void dis()
    {
        for (int i = 0; i < lim; i++)
        {
            cout<<*(ptr+i);
        }
    }
};

int main()
{
    Number n;
    n.dis();
    n.~Number();
    return 1;
}
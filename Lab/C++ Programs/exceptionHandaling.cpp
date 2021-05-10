#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            cout<<"Division between numbers is "<<a/b;
        }
        else
        {
            throw(b);
        }
    }
    catch(int b)
    {
        cout<<"Error because b is "<<b;
    }
    return 1;
}
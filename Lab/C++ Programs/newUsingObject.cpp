#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Number
{
private:
    int n;
public:
    void get()
    {
        cin>>n;
    }
    void dis()
    {
        cout<<n;
    }
};
 
int main()
{
    Number *n;
    n=new Number;
    n->get();
    n->dis();
    return 1;
}
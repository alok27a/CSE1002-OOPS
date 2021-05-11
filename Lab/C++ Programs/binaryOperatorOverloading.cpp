// (+) operator overloading

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
    int r,i;
    public:
        void get(){
            cin>>r>>i;
        }
        void dis(){
            cout<<r<<" + "<<i<<"i";
        }
        complex operator +(complex c){
            complex c3;
            c3.r=c.r+r;
            c3.i=c.i+i;
            return c3;
        }
        complex operator *(complex c){
            complex c3;
            c3.r=r*c.r-i*c.i;
            c3.i=i*c.r+r*c.i;
            return c3;
        }
};

int main()
{
    complex c1,c2,c3,c4;
    c1.get();
    c2.get();
    c3=c1+c2;// c3=c1.operator(+)c2
    c4=c1*c2;
    c3.dis();
    c4.dis();
    return 1;
}
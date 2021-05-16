//Operator overloading of friend function of binary operator

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
    int r,i;
    public:
    void get();
    void dis();
    friend void operator +(complex &c1,complex &c2);
};

void complex::get(){
    cin>>r>>i;
}

void complex::dis(){
    cout<<r<<" + "<<i<<"i";
}

void operator +(complex &c1,complex &c2){
    complex c;
    c.r=c1.r+c2.r;
    c.i=c1.i+c2.i;
    c.dis();
}

int main()
{
    complex c1,c2;
    c1.get();
    c2.get();
    operator +(c1,c2);
    return 1;
}
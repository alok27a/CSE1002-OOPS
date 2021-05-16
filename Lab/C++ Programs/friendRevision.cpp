#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
 class complex{
     int r,i;
     public:
        void get();
        void dis();
        friend complex add(complex c1,complex c2);
 };

 void complex::get(){
     cin>>r>>i;
 }

 void complex::dis(){
     cout<<r<<" + "<<i<<"i";
 }

complex add(complex c1,complex c2)
{
    complex c;
    c.r=c1.r+c2.r;
    c.i=c1.i+c2.i;
    return c;
}

int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=add(c1,c2);
    c3.dis();
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Complex{
    int r,i;
    public:
    void get(){
        cin>>r>>i;
    }
    void dis(){
        cout<<r<<" + "<<i<<"i";
    }
    friend Complex operator +(Complex& c1,Complex& c2);
};
Complex operator +(Complex& c1,Complex& c2){
    Complex c;
    c.r=c1.r+c2.r;
    c.i=c1.i+c2.i;
    return c;
}
 
int main()
{
    Complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1+c2;
    c3.dis();
    return 1;
}
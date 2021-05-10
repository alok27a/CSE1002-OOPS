#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
    private:
        int a;
        int b;
    public:
        void setNumber();
        friend void sum(complex c1,complex c2);
        void printNumber();
};

void complex::setNumber(){
    cout<<"The real part of the complex number"<<endl;
    cin>>a;
    cout<<"The imaginery part of the complex number"<<endl;
    cin>>b;
}

void sum(complex c1,complex c2)
{
    cout<<c1.a+c2.a<<" + "<<c1.b+c2.b<<"i"<<endl;
}

int main()
{
    complex s1,s2;
    s1.setNumber();
    s2.setNumber();
    sum(s1,s2);
    return 1;
}
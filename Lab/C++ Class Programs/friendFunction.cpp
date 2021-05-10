#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
    public:
    int r,i;
    void get();
    friend void sum();
};

void complex::get(){
    cin>>r>>i;
}
void sum(){
    complex c1,c2;
    cout<<c1.r+c2.r<<" + "<<c1.i+c2.i<<"i";
}

int main()
{
    complex o1,o2;
    o1.get();
    o2.get();

    sum();

    return 1;
}
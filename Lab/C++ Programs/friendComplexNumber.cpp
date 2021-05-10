#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
    int r,i;
    public:
    void get(){
        cin>>r;
        cin>>i;
    }
    friend void add(complex a1,complex a2);
};

void add(complex a1,complex a2){
    cout<<a1.r+a2.r<<" + "<<a1.i+a2.i<<"i";
}

int main()
{
    complex c1,c2;
    c1.get();
    c2.get();
    add(c1,c2);
    return 1;
}
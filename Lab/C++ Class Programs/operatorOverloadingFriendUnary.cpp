//Unary operator overloading using friend function

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y,z;
    public:
    void get();
    void display();
    friend void operator -(number& n);
};

void number::get(){
    cin>>x>>y>>z;
}

void number::display(){
    cout<<"x= "<<x<<"y= "<<y<<"z= "<<z;
}

void operator -(number& n){// If we dont pass by refrence then its not updated
    n.x=-n.x;
    n.y=-n.y;
    n.z=-n.z;
}

int main()
{
    number n;
    n.get();
    -n;
    n.display();
    return 1;
}
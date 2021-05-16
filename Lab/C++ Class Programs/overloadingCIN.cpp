//Overloading cin(>>) && cout(<<)

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y;
    public:
    friend void operator >>(istream &in ,number &n);
    friend void operator <<(ostream &out,number &n);
};

void operator >>(istream &in, number &n){
    in>>n.x>>n.y;
}

void operator <<(ostream &out,number &n){
    out<<n.x<<"\t"<<n.y;
}

int main()
{
    number n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<n1;
    cout<<n2;
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Negate{
    int x,y;
    public:
    void get(){
        cin>>x>>y;
    }
    void dis(){
        cout<<x<<" "<<y;
    }
    friend void operator -(Negate& n);
};
void operator -(Negate& n){
    n.x=-n.x;
    n.y=-n.y;
} 

int main()
{
    Negate n1;
    n1.get();
    -n1;
    n1.dis();
    return 1;
}
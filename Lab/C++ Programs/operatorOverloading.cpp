/*
Operator Overloading

returntype operator op(argument)
{

}


Two types of operator--> 1.Unary  2. Binary

Unary operators are-> ++,--
Binary operators are--> +,-,*,/

Number of arguments to be passed
        
        Member function       Friend function
Unary     0                        1

Binary    1                         2

*/

#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y;
    public:
        void get(){
            cin>>x>>y;
        }
        void operator -(){
            x=-x;
            y=-y;
        }
        void dis(){
            cout<<"x="<<x<<" y="<<y;
        }
};

int main()
{
    number n1;
    n1.get();
    -n1;
    n1.dis();
    return 1;
}
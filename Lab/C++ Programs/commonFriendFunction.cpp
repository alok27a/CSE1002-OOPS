#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class first;
class second;

class first{
    int a;
    public:
    void get(){
        cin>>a;
    }
    friend void compare(first f,second s);
};

class second{
    int b;
    public:
    void get(){
        cin>>b;
    }
    friend void compare(first f,second s);
};

void compare(first f,second s)
{
    if(f.a>s.b)
    {
        cout<<"a is bigger"<<endl;
    }
    else{
        cout<<"b is bigger"<<endl;
    }
}

int main()
{
    first f;
    second s;
    f.get();
    s.get();
    compare(f,s);
    return 1;
}
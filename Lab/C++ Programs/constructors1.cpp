/*
-Constructors are used to intialise the values
-Name is same as class name 

There are 3 types of constructor 
1)Default constructor-->It will be executed whenever an object is created
2)Parametised-->Arguements are passed 
3)Copy constructor-->copiess the value from one object to other

Note:- Always invoke copy constructor by call by reference method 

Destructor

-Destroy the object 
-Written with ~(tilde) operator behind class name
-Called when Scope of the objects are over
*/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class sample;

class sample
{
private:
    int a, b;

public:
    sample()//Default constructor
    {
        a = b = 0;
    }
    sample(int x, int y)//Parameterised constructor
    {
        a = x;
        b = y;
    }
    sample(sample &s)//Copy constructor
    {
        a=s.a;
        b=s.b;
    }
    void dis();
    ~sample(){
        cout<<"Destructor is called "<<endl;
    }
};

void sample::dis()
{
    cout << "The value of a is " << a << " and b is " << b << endl;
}

int main()
{
    sample s1;
    s1.dis();
    sample s2(2, 3);
    s2.dis();
    sample s3(s1);
    s3.dis();
    return 1;
}
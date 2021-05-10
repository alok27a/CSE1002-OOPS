#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class sample{

    int a,b;
    public:
    sample()//Default constructor
    {
        a=0;
        b=0;
    }
    sample(int x,int y)//parameterised constructor
    {
        a=x;
        b=y;
    }
    sample(sample &s)//copy constructor
    {
        a=s.a;
        b=s.b;
    }
    void setOutput(){
        cout<<"The value a "<<a<<" and b is "<<b<<endl;
    }
    ~sample(){
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    sample s1;
    s1.setOutput();
    
    sample s2(7,3);//s2=s2(8,3)
    s2.setOutput();

    sample s3(s2);//s3=s2
    s3.setOutput();

    return 1;
}
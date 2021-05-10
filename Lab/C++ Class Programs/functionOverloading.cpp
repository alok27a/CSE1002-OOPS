#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void sum(int a,int b)
{
    cout<<"This the function with 2 arguments "<<endl;
    cout<<a+b;
}

void sum(int a,int b,int c)
{
    cout<<"This is function with 3 argument "<<endl;
    cout<<a+b+c;
}

int main()
{
    cout<<"The sum of 2 and 3 is ";
    sum(2,3);

    

    return 1;
}
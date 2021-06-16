#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

template<class T>
void larger(T n1,T n2)
{
    if(n1>n2)
    {
        cout<<"n1 is bigger"<<endl;
    }
    else
    {
        cout<<"n2 is bigger"<<endl;
    }
}

int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    larger(n1,n2);
    return 1;
}
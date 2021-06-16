#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

template<class T>
void print(T n1,T n2)
{
    cout<<n1<<endl<<n2<<endl;
}

template<class T>
void print(T x)
{
    cout<<x<<endl;
}

int main()
{
    print(5,7);
    print(5.7,7.3);
    print('c','a');
    return 1;
}
//Function Overloading
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void print(int a)
{
    cout<<a;
}

void print(char c)
{
    cout<<c;
}

void print(double x)
{
    cout<<x;
}

int main()
{
    print(4);
    print('a');
    print(5.6899);
    return 1;
}
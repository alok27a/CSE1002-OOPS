#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int *ptr;
    ptr=new int;
    *ptr=5;
    float *fptr;
    fptr=new float;
    *fptr=8.34;
    cout<<*ptr<<"\n"<<*fptr;
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int lim;
    cin>>lim;
    int *ptr;
    ptr=new int;
    for(int i=0;i<lim;i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0;i<lim;i++)
    {
        cout<<*(ptr+i)<<"\t";
    }
    return 1;
}
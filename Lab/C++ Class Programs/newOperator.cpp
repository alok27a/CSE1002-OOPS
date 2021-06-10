#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int *ptr;
    ptr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    for(i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    delete[] ptr;
    return 1;
}
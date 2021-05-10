#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    int x=-1;
    cout<<"Before try\n";
    try{
        cout<<"Inside try block\n";
        if(x<0)
        {
            throw(x);
            cout<<"After Throw(will not be executed)"<<endl;
        }
    }
    catch(int x){
        cout<<"After try & throw inside catch\n";
    }
    cout<<"After everything";
    return 1;
}
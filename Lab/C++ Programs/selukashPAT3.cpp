#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
class Telivision;
class Refridgerator;
class WashingMachine;
void search(int m, int o, int p, Telivision T, Refridgerator R, WashingMachine W)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        if(T[i].Price>=1000 && T[i].Price<=1500 && m>20)
        {
            cout<<T[i].display();
        }
    }
    for(i=0;i<o;i++)
    {
        if(o<5 && R[i].Price>2000)
        {
            cout<<R[i].display();
        }
    }
    for(i=0;i<p;i++)
    {
        if(p<5 && W[i].pCode[0]=='U')
        {
            cout<<W[i].display();
        }
    }
}

int main()
{

    return 1;
}
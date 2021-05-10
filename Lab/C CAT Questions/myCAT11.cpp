//There is a room with a table, chair, bed, water bottle
//for research purpose we need to maintain the data of temperatures, sp. heats and
//mass of each of these elements.
//It may be required to find m*sp_heat*temperature (energy associated)
//Can you handle this using class and objects??
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int temp,heat,mass,energy;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>temp;
        cin>>heat;
        cin>>mass;
        energy=temp*heat*mass;
        arr[i]=energy;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }



    return 1;
}
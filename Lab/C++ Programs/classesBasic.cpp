#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class employee{
    public:
        char name[100];
        char company[100];
        int age;
    void employeeDet();
};

void employee :: employeeDet(){
    cout<<"Name- "<<name<<endl;
    cout<<"Company- "<<company<<endl;
    cout<<"Age- "<<age<<endl;
}

int main()
{
    employee arr[10];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].name>>arr[i].company>>arr[i].age;
    }
    for(i=0;i<n;i++)
    {
        arr[i].employeeDet();
    }
    return 1;
}
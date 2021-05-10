#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class student
{
public:
    int mark[3]; 
    void get();
    int max(int arr[]);
    void show();
};
void student::get()
{
    int i;
    for(i=0;i<3;i++)
    {
        cin>>mark[i];
    }
}
int student::max(int arr[])
{
    int i,m,j;
    for(i=0;i<3;i++)
    {
        m=i;
        for(j=i+1;j<3;j++)
        {
            if(arr[j]>arr[m])
            {
                m=j;
            }
        }
    }
    return arr[m];
}
void student::show()
{
    int a=max(mark);
    cout<<a;
}

int main()
{
    student s;
    s.get();
    s.show();
    return 1;
}
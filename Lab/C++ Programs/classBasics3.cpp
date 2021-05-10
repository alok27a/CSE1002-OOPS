#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class employee{
    private:
        int bp;
        int addition;
        int deduction;
        int sal[100];
        static int counter;
    public:
        int id;
        char name[100];
        void getDet();
        void setSal();
};

int employee::counter=0;

void employee::getDet()
{
    cout<<"Enter the details of employee"<<endl;
    cin>>id>>name>>bp>>addition>>deduction;
    sal[counter]=bp+addition-deduction;
    counter++;
}

void employee::setSal()
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<sal[i]<<endl;
    }
}

int n;
int main()
{
    int i;
    employee s;
    cout<<"Please enter the number of employees in Company"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s.getDet();
    }
    for(i=0;i<n;i++)
    {
        s.setSal();
    }

    return 1;
}
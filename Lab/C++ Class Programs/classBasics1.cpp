#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void getData(int a1,int b1,int c1);//Declaring the function
        void printData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee::getData(int a1,int b1,int c1)//   :: is scope resolution operator
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee alok;
    alok.getData(1,4,8);
    alok.d=21;
    alok.e=69;
    alok.printData();
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class BOX{
    private:
        double height;
    public:
        double length;
        double bredth;
        void getData(int h);
        void volume(int l,int b,int h);
};

void BOX::getData(int h)
{
    height=h;
}

void BOX::volume(int l,int b,int h){
    double vol;
    vol=l*b*h;
    cout<<vol<<endl;
}

int main()
{
    BOX b;
    double la,ba,ha;
    cout<<"Enter l,b,h"<<endl;
    cin>>la>>ba>>ha;
    b.getData(ha);
    b.volume(la,ba,ha);
    return 1;
}
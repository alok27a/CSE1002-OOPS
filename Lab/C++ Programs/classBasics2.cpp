#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class binary{
    private:
        char str[10];
    public:
        void inp();
        void check();
};

void binary:: inp(){
    cout<<"Pls enter a binary number"<<endl;
    cin>>str;
}

void binary::check(){
    int l=strlen(str);
    int i;
    for(i=0;i<l;i++)
    {
        if(str[i]!='0' && str[i]!='1')
        {
            cout<<"Not a binary number"<<endl;
            break;
        }
    }
}

int main()
{
    binary s;
    s.inp();
    s.check();
    return 1;
}
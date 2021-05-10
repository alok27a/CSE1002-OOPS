#include <stdio.h>
#include <iostream>

#include <string>
using namespace std;

int main()
{
    string str = "Alok";
    cout << "The name is " << str << endl;
    cout << "The length of the string is " << str.length() << endl;
    cout<<"The length is "<< str.substr(0,3)<<endl;
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main(){
    int a=916;
    int *ptra;
    ptra=&a;
    cout<<"The number is "<<a<<endl;
    cout<<"The location of a is"<<ptra<<endl;
    cout<<"The number in pointer form is "<<*ptra<<endl;
    return 1;
}
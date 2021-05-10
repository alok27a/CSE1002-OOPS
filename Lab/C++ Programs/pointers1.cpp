#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main(){
    //pointer:-It is a datatype which is used to store the location of a variable
    int a=67;
    int *ptra;
    ptra=&a;


    //& is the address of operator 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The adress of a is "<<ptra<<endl;


    //* ---> Derefernce operator pa
    cout<<"The value at address ptra is "<<*ptra<<endl;
    cout<<"The value of a is "<<a;
    return 1;
}

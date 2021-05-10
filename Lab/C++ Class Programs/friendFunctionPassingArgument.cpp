#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class complex{
private:
int r,i;
public:
void get();
friend void sum();
};

void complex::get(){
    cin>>r>>i;
}

void sum(){
  

}

int main()
{

    return 1;
}
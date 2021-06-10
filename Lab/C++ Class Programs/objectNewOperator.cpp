#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
/*
new operator is used in pointer memory allocation
*/
class Number
{
    int num;

public:
    Number()
    {
        num = 0;
    }
    void get()
    {
        cin >> num;
    }
    void disp()
    {
        cout << num;
    }
};

int main()
{
    Number *n = new Number;
    n->get();
    n->disp();
    return 1;
}
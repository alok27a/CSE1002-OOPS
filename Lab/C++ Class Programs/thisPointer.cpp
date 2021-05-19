// 'this' pointer : when local variable's name is same as member's name
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class number
{
    int x;
public:
    void get(int x)
    {
        this->x = x;
    }
    void dis()
    {
        cout << x;
    }
};

int main()
{
    number n;
    n.get(5);
    n.dis();
    return 1;
}
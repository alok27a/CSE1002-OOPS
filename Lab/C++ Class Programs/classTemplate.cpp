#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

template <class T, class U>
class Number
{
    T a;
    U b;

public:
    void get()
    {
        cin >> a >> b;
    }
    void dis()
    {
        cout << a << "\t" << b;
    }
};

int main()
{
    Number<int, char> n1;
    n1.get();
    n1.dis();
    return 1;
}
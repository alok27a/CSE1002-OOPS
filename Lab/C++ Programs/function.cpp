#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;

    cout << "Enter second number";
    cin >> b;

    cout << "The sum of the two numbers is " << add(a, b);
    return 1;
}
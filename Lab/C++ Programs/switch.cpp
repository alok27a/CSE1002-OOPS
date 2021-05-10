#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "You are 12yrs old";
        break;

    case 18:
        cout << "You are 18yrs old";
        break;

    default:
        cout << "You are neither 18 nor 12";
    }

    return 1;
}
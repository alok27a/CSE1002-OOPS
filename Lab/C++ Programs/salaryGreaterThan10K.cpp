#include <iostream>
using namespace std;

int main()
{
    int sal;
    cout << "Enter your salary";
    cin >> sal;
    if (sal > 10000)
    {
        cout << "Salary greater than 10,000";
    }
    else
    {
        cout << "Salary less than 10,000";
    }
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Number
{
public:
    int x, y;
    void get()
    {
        cin >> x >> y;
    }
    int divide(int a, int b)
    {
        try
        {
            if (b != 0)
            {
                if (a % b == 0)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                throw(0);
            }
        }
        catch (int a)
        {
            return -1;
        }
    }
    int divide(int a)
    {
        if (a % 2 == 0 || a % 3 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int choice;
    Number n;
    int a, b;
    cin >> choice;
    switch (choice)
    {
    case 1:
        n.get();
        a = n.divide(n.x, n.y);
        if (a == 1)
        {
            cout << "Divisible";
        }
        else if (a == 0)
        {
            cout << "Not Divisible";
        }
        else
        {
            cout << "Division by Zero";
        }
        break;
    case 2:
        cin >> n.x;
        b = n.divide(n.x);
        if (b == 1)
        {
            cout << "Composite Number";
        }
        else
        {
            cout << "Prime Number";
        }
        break;
    default:
        cout << "Invalid Input";
    }
    return 1;
}
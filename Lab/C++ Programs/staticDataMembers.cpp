#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    int id;

public:
    static int count;
    void get()
    {
        cin >> id;
        count++;
    }
    void dis()
    {
        cout<<id;
    }
    static void getCount()
    {
        cout<<count;
    }
};

int Employee::count = 0;

int main()
{
    

    return 1;
}
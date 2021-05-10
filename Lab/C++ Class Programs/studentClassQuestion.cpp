#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class student
{
private:
    int roll;
    char name[50];
    int mark[10];
    int tot = 0;

public:
    void get();
    void display();
};

void student::get()
{
    int i, m;
    cin >> roll >> name >> m;
    for (i = 0; i < m; i++)
    {
        cin >> mark[i];
        tot += mark[i];
    }
}

void student::display()
{

    cout << roll << "   " << name << "   "
         << "    " << tot << endl;
}

int main()
{
    int i, n;
    cin >> n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        s[i].get();
    }
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    return 1;
}
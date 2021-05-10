#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class employee
{
private:
    char name[100];
    float sal;
    float incen;
    float tot;

public:
    float inpData()
    {
        cin >> name;
        cin >> sal;
        cin >> incen;
        tot = sal + incen;
        return tot;
    }
    void setData()
    {
        cout << "Employee name is " << name << " and salaray is " << tot << endl;
    }
};

int main()
{
    employee a, p;
    a.inpData();
    p.inpData();

    a.setData();
    p.setData();

    return 1;
}
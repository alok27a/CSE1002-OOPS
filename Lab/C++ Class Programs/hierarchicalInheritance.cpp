#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Emp
{
protected:
    int eid;
    char name[30];
};

class PerEmp : public Emp
{
protected:
    float sal;

public:
    void getp()
    {
        cout<<"Permenant Employee"<<endl;
        cin >> eid >> name >> sal;
    }
    void dis()
    {
        cout << "The eid, name and salary is" << endl;
        cout << eid << name << sal;
    }
};

class TempEmp : public Emp
{
protected:
    float noh,sph;
public:
    void gett()
    {
        cout<<"Temprary Employee"<<endl;
        cin>>eid>>name>>noh>>sph;
    }
    void dis()
    {
        
    }
};

int main()
{

    return 1;
}
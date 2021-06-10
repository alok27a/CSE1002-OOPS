/*Inheritance
Reduces reusability of code(FOOLLOWS DRY PRINCIPLE)

Types of Inheritance
1) Single Inheritance ->A derived class from only one base class
2) Multiple Inheritance ->A derived class with more than one base class
3) Multilevel Inheritance ->Deriving a class from already derived class
4) Hybrid Inheritance -> Multiple + Multilevel


*/
// Single Inheritance
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

// Base Class
class Employee
{
    int empid;
    float salary;
    public:
        Employee(int ID)
        {
            empid=ID;
            salary=35;
        }
};

// Derived Class-> Programmer

class Programmer : protected Employee
{




};

int main()
{
    Employee alok(1),prasoon(2);
    

    return 1;
}
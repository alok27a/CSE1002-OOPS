#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <list>

using namespace std;

void disp(list<int> l)
{
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout<<endl;
}

int main()
{
    list<int> l1; // Its a doubly linked list
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(14);
    l1.push_back(87);
    l1.push_back(71);
    disp(l1);

    list<int> l2(7);
    list<int>::iterator itr;
    itr = l2.begin();
    int temp;
    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        l2.push_back(temp);
    }
    disp(l2);
    return 1;
}
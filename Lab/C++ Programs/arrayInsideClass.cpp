#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct shop
{
private:
    int price[100];
    int id[100];

public:
    int counter = 0;
    int i=0;
    void getValue();
    void setValue();
};

void shop::getValue()
{
    cout << "Enter the details of " << counter + 1 << " product" << endl;
    cin >> id[counter];
    cin >> price[counter];
    counter++;
}

void shop::setValue()
{
    cout << "The detail of product is " << id[i] << " " << price[i] << endl;
    i++;
}

int main()
{
    int i, n;
    shop puneri;
    cout << "Number of products" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        puneri.getValue();
    }
    for (i = 0; i < n; i++)
    {
        puneri.setValue();
    }
    return 1;
}
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {40, 80, 90, 70, 40};
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Using while loop" << endl;
    i = 0;
    while (i < 5)
    {
        cout << arr[i] << endl;
        i++;
    }
    i = 0;
    cout << "Using do while loop" << endl;
    do
    {
        cout << arr[i] << endl;
        i++;

    } while (i < 5);

    return 1;
}
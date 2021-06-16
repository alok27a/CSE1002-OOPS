#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

template <class T>
T largest(T e1, T e2)
{
    if (e1 > e2)
    {
        return e1;
    }
    else
    {
        return e2;
    }
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (i = 1; i < n; i++)
    {
        temp = largest(arr[0], arr[i]);
    }

    float arr1[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    float temp1;
    for (i = 1; i < n; i++)
    {

        temp1 = largest(arr1[0], arr1[i]);
    }

    char arr2[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    char temp2;
    for (i = 1; i < n; i++)
    {

        temp2 = largest(arr2[0], arr2[i]);
    }
    cout << temp<<endl;
    cout << temp1<<endl;
    cout << temp2<<endl;
    return 1;
}
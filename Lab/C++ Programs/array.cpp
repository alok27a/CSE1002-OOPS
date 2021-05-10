#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num_ins;
    cin >> num_ins;
    int pos, index;
    cin >> pos;
    index = pos - 1;
    int a[50];

    for (i = 0; i < n + 1; i++)
    {
        if (i == index)
        {
            a[i] = num_ins;
        }
        else if (i < index)
        {
            a[i] = arr[i];
        }
        else
        {
            a[i] = arr[i - 1];
        }
    }
    for (i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }

    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

template <class T>
class Number
{
    T arr[60];
    int n;

public:
    void get()
    {
        int i = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void sort()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    T temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void disp()
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
};

int main()
{
    Number<int> n1;
    Number<float> n2;
    Number<char> n3;
    n1.get();
    n1.sort();

    n2.get();
    n2.sort();

    n3.get();
    n3.sort();
    n1.disp();
    n2.disp();
    n3.disp();
    return 1;
}
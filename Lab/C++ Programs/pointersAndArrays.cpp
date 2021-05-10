
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int j;
    int* p=arr;
    cout<<*p<<endl;
    for(j=0;j<5;j++){
        cout<<*p<<endl;
        p++;
    }
    for (j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }

    return 1;
}
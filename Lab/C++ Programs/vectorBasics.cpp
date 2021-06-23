#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

template <class T>
void disp(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> vec1;
    int size, temp;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        vec1.push_back(temp);
    }
    disp(vec1);
    vector<int>::iterator iter;
    iter=vec1.begin();
    vec1.insert(iter,566);
     disp(vec1);
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

// vector is a dynamic array it doesnt have a fixed size.

int main()
{
    vector<int> sample;
    sample.push_back(20);
    sample.push_back(30);
    sample.push_back(40);
    sample.push_back(50);
    int l = sample.size();
    for (int i = 0; i < l; i++)
    {
        cout << sample[i] << "\t";
    }
    return 1;
}
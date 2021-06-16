#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty())
    {
        cout << g.front();
        g.pop();
        cout << "\n";
    }
}
void showq1(queue<char> gq)
{
    queue<char> g = gq;
    while (!g.empty())
    {
        cout << g.front();
        g.pop();
        cout << "\n";
    }
}

int main()
{
    queue<int> arr;
    queue<char> c;
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        arr.push(temp);
    }
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        arr.pop();
    }
    for (i = 0; i < 7; i++)
    {
        char t;
        cin >> t;
        c.push(t);
    }
    int m;
    cin >> m;
    for (i = 0; i < m; i++)
    {
        c.pop();
    }
    showq(arr);
    showq1(c);
    return 1;
}
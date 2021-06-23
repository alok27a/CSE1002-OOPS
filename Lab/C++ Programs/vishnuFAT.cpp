#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;



class Points
{
public:

    float x, y;
    void get()
    {
        cin >> x >> y;
    }
};

class Ar:public Points
{
public:
    float area;
};


int main()
{
    int n;
    cin >> n;
    Points p[n];
    Ar a[10];
    for (int i = 0; i < n; i++)
    {
        p[i].get();
    }
    float max=0,temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                temp= ((p[i].x)*(p[j].y)-(p[i].y)*(p[j].x))+((p[j].x)*(p[k].y)-(p[j].y)*(p[k].x))+((p[k].x)*(p[i].y)-(p[k].y)*(p[i].x));
                temp=abs(temp)/2;
                if(max<temp)
                {
                    max=temp;
                }
            }
        }
    }
    cout<<max;
    return 1;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

class Distance
{
public:
    float x, y, z;
    void get()
    {
        cin >> x >> y >> z;
    }
};

void computeDist(Distance d1, Distance d2)
{
    float final1;
    final1 = sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2) + pow(d1.z - d2.z, 2));
    cout << final1 << endl;
}
void computeDist(float x1, int y1, float x2, float y2)
{
    float final2;
    final2 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << final2 << endl;
}

int main()
{
    Distance d1, d2;
    d1.get();
    d2.get();
    computeDist(d1, d2);
    computeDist(d1.x, d1.y, d2.x, d2.y);
    return 1;
}
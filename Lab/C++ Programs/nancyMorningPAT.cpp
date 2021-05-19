#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Measure
{
public:
    int yard, inch;
    Measure()
    {
        yard = 0;
        inch = 0;
    }
    static int count;
    static void printCount()
    {
        cout << count<<endl;
    }
    void get()
    {
        cin>>yard>>inch;
        count++;
    }

    Measure operator+(Measure m)
    {
        Measure m1;
        m1.yard=yard+m.yard;
        m1.inch=inch+m.inch;
        return m1;
    }
};

int Measure::count = 0;

int main()
{
    Measure m1,m2,m3;
    m1.get();
    m2.get();
    m3=m1+m2;
    Measure::printCount();
    float inc,yar;
    yar=m3.yard+(m3.inch)/36;
    inc=m3.inch+(m3.yard)*36;
    cout<<inc<<endl;
    cout<<yar;
    return 1;
}
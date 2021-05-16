#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Lib
{
    char roll[100];
    char name[100];
    char gender;
    char school[100];
    char exp_date[100];
    char act_date[100];
   
    int date;
    int month;
    int year;

public:
 int fine;
    struct date
    {
        int day;
        int month;
        int year;
    } ereturn, areturn;

    int days(struct date d1, struct date d2);
    void get();
    void dis();
};
int Lib::days(struct date d1, struct date d2)
{
    if (d1.month > d2.month)
    {

        if (d1.month == d2.month && d1.year == d2.year)
        {
            if (d1.day - d2.day > 0)
                return d1.day - d2.day;
        }

        else if (d1.month < d2.month)
        {
            return d2.day + (30 - d1.day);
        }
    }

    else
    {
        return 0;
    }
}

void Lib::get()
{
    cin >> roll >> name >> gender >> school ;
}

void Lib::dis(){
    cout<<roll<<name<<gender<<school<<fine;
}


int main()
{
    int n, i, val;
    cin >> n;
    Lib l[10];
    for (i = 0; i < n; i++)
    {
        l[i].get();
        scanf("%d/%d/%d",l[i].ereturn.day,l[i].ereturn.month,l[i].ereturn.year);
        scanf("%d/%d/%d",l[i].areturn.day,l[i].areturn.month,l[i].areturn.year);
        l[i].fine=l[i].days(l[i].ereturn, l[i].areturn);
    }
    cin >> val;

    for(i=0;i<n;i++)
    {
        if(l[i].fine>val)
        {
            l[i].dis();
        }
    }

    return 1;
}
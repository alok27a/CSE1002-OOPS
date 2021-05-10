#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Tour
{
public:
    char Tripcode[100];
    int no_a;
    int no_c;
    int km;
    int fare;
    void EnterTour();
    void Assignfare();
    void ShowTour();
};

void Tour::EnterTour(){
    cin>>Tripcode;
    cin>>no_a;
    cin>>no_c;
    cin>>km;
}

void Tour::Assignfare(){
    if(km>=1000)
    {
        fare=(500*no_a)+(250*no_c);
    }
    else if(km>=500 && km<1000)
    {
        fare=(300*no_a)+(150*no_c);
    }
    else
    {
        fare=(200*no_a)+(100*no_c);
    }
}
void Tour::ShowTour(){
    cout<<Tripcode<<endl;
    cout<<no_a<<endl;
    cout<<no_c<<endl;
    cout<<km<<endl;
    cout<<fare<<endl;
}

int main()
{
    int n,i;
    Tour s[10];
    cin>>n;//Number of trips
    for(i=0;i<n;i++)
    {
        s[i].EnterTour();
        s[i].Assignfare();
    }
    for(i=0;i<n;i++)
    {
        s[i].ShowTour();
    }

    return 1;
}
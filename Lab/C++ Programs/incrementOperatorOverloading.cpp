// Increment operator overloading(++)
// 1) Pre increment 
// 2) Post increment

// If there are both post and pre increment operator in a class then we can 
// differentiate by writing (int) in post increment

/*
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y;
    public:
        void get(){
            cin>>x>>y;
        }
        void operator ++(int){ //We have used (int) because its post increment 
            x++;
            y++;
        }
        void dis(){
            cout<<"x= "<<x<<" y="<<y;
        }
};

int main()
{
    number n1;
    n1.get();
    n1++;        //  If its post increment operator we will write n1++
    n1.dis();
    return 1;
}
*/

// Return type in operator overloading in preincrement

/*
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y;
    public:
        void get(){
            cin>>x>>y;
        }
        number operator ++(){ //We have used (int) because its post increment 
            number n;
            n.x=++x;
            n.y=++y;
            return n;
        }
        void dis(){
            cout<<"x= "<<x<<" y="<<y;
        }
};

int main()
{
    number n1,n2;
    n1.get();
    n2=++n1;        //  If its post increment operator we will write n1++
    n2.dis();
    return 1;
}
*/

// Return type in operator overloading in post increment
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class number{
    int x,y;
    public:
        void get(){
            cin>>x>>y;
        }
        number operator ++(int){ //We have used (int) because its post increment 
            number n;
            n.x=x++;
            n.y=y++;
            return n;
        }
        void dis(){
            cout<<"x= "<<x<<" y="<<y;
        }
};

int main()
{
    number n1,n2;
    n1.get();
    n2=n1++;        //  If its post increment operator we will write n1++
    n2.dis();
    n1.dis();
    return 1;
}
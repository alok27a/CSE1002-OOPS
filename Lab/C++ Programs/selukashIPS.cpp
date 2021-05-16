#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

class Cowin{
    int batch_no;
    char name_vacc[100];
    char name_comp[100];
    float price;
    char name_camp[100];
    public:
        void search(char str[]);// Search by camp name
        void search();
};

int main()
{

    return 1;
}
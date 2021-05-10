#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a=90;
    int *ptra;
    ptra=&a;
    printf("%p\n",ptra);
    printf("%d\n",*ptra);
    printf("%p\n",&ptra);
    printf("%d\n",sizeof(ptra));

    return 1;
}
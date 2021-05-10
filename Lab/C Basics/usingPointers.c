#include<stdio.h>
#include <string.h>

int main(){
    int a=56;
    int *ptra;
    ptra=&a;
    *ptra+=24;//We are adding 24 to pointer pointng to the loc
    printf("%d\n",*ptra);
    printf("%d",a);

    return 1;
}
#include<stdio.h>
#include<string.h>
int main(){
    int a=33;
    int *ptra;
    ptra=&a;
    printf("%d\n",a);
    printf("%p\n",ptra);
    printf("%p\n",&ptra);
    printf("%d\n",*ptra);

    return 1;
}
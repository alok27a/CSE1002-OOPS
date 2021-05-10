#include <stdio.h>
#include <string.h>

int main(){
    int a=57;
    int *ptra;
    ptra=&a;
    printf("%p\n",ptra);
    printf("%p\n",&ptra);
    printf("%d\n",*ptra);
    printf("%d\n",a);

    return 1;
}
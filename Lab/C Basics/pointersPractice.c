#include<stdio.h>
#include<string.h>

int main(){
    int n;
    int *ptrn;
    scanf("%d",&n);
    ptrn=&n;
    printf("%d\n",n);
    printf("%p\n",ptrn);
    printf("%d\n",*ptrn);
    printf("%p\n",&ptrn);


    return 1;
}
#include <stdio.h>
int fact(int n){
    int i=0,fact=1;
    for(i=1;i<n+1;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int f,n;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
    return 1;
}
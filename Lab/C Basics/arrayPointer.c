#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptrarr;
    ptrarr=arr;
    printf("%p\n",ptrarr);
    printf("%p\n",&arr[0]);

    return 1;
}
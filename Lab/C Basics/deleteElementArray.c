#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del;
    scanf("%d", &del);
    int arr1[n], k;
    for (i = del-1; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d\n",arr1[i]);
    }

    return 1;
}
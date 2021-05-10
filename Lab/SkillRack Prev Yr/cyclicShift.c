#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n,m;
    scanf("%d",&n);
    int i,j;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int new_arr[n];
    for(i=0;i<n;i++)
    {
        j=(i+m)%n;
        new_arr[j]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",new_arr[i]);
    }

    return 1;
}
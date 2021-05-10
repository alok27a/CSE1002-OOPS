#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int arr[50], i = 0,j=0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max1,max2;
    
    max1=arr[0];
    for ( i = 1; i < n; i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2)
        {
            max2=arr[i];
        }

    }
    printf("%d",max2);
    return 1;
}
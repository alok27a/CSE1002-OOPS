#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }   
    int temp=sum;
    //sum of the digits of sum
    int dig=0;
    while(sum!=0)
    {
        dig=dig+sum%10;
        sum=sum/10;
    }
    for(i=0;i<n;i++)
    {
        arr[i]+=dig;
    }
    arr[n]=temp;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }


    return 1;
}
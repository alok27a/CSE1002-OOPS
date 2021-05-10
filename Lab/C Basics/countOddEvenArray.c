#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int arr1[50],  i = 0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int even=0;
    for(i=0;i<n;i++){
        if(arr1[i]%2==0){
            even++;
        }
    }
    printf("Even number is %d",even);
    printf("Odd number is %d",n-even);

    return 1;
}
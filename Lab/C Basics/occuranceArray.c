#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int arr[50], i = 0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int find;
    scanf("%d", &find);
    int count=0;
    for(i=0;i<n;i++){
        if(find==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    
    return 1;
}
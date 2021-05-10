#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int arr[5]={1,3,5,7,9};
    int*ptrarr;
    ptrarr=arr;//Writing This is same as ptrarr=&arr[0]
    printf("%d\n",ptrarr);
    printf("%d\n",&arr[0]);
    ptrarr++;
    printf("%d\n",ptrarr);
    printf("%d\n",&arr[1]);

    ptrarr--;
    printf("%d\n",arr[1]);
    printf("%d\n",*(ptrarr+1));

    return 1;
}
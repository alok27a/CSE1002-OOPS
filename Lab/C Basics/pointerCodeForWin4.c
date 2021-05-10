//Reverse of an array using pointer
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n;
    scanf("%d\n", &n);
    int i = 0;
    int arr[20];
    int *ptr_arr;
    ptr_arr = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr_arr + i);
    }
    int *rev_arr;
    rev_arr=ptr_arr+n-1;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(rev_arr) );
        rev_arr--;
    }




    
    return 1;
}
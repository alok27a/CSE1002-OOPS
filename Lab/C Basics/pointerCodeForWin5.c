#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    int arr[50];
    int *ptr_arr;
    ptr_arr=arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr_arr+i));
    }
    int search;
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (*(ptr_arr+i) == search)
        {
            printf("Found");
            break;
        }
    }

    return 1;
}
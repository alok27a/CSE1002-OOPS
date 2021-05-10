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
    int *cpy_arr;
    cpy_arr=ptr_arr;
    for (i = 0; i < n; i++)
    {
        *(cpy_arr + i) = *(ptr_arr + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(cpy_arr + i));
    }

    return 1;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptrarr;
    ptrarr = arr;
    ptrarr++;
    printf("%d\n", arr[1]);
    printf("%d\n", *(ptrarr + 1));

    return 1;
}
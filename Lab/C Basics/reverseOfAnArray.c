#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rev_arr[n];
    for (i = 0; i < n; i++)
    {
        rev_arr[i] = arr[n - i - 1];
        printf("%d ", rev_arr[i]);
    }

    return 1;
}
#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], i = 0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 1;
}
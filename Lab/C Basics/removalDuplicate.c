#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int newarr[n];
    int j = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                
            }
        }
    }

    return 1;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[50], i = 0, j = 0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;

    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (arr[i] > arr[j])
            {

                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 1;
}
//Bubble sort by passing array to function
#include <stdio.h>
#include <string.h>

void bubblesort(int arr[], int n)
{
    int i = 0, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    //n is the length of array or the number of elements in it
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 1;
}
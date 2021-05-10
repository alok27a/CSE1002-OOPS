//linear or binary search 
#include <stdio.h>
#include <string.h>

void linearsearch(int arr[], int n, int s)
{
    int i = 0;
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
        printf("Found");
    else
        printf("Not Found");
}

void binarysearch(int arr[], int n, int s)
{

}

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    scanf("%d", &search);
    char m;
    scanf("%c", &m);
    if (m == 'l')
    {
        linearsearch(arr, n, search);
    }
    else
    {
        binarysearch(arr, n, search);
    }

    return 1;
}
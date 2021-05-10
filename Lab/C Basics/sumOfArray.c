#include <stdio.h>
#include <string.h>
#include <math.h>

int sumOfArray(int arr1[], int a)
{
    int i = 0, s = 0;
    for (i = 0; i < a; i++)
    {
        s = s + arr1[i];
    }
    return s;
}

int main()
{
    int i = 0, n;
    scanf("%d", &n); //Number of elements in an array
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); //Elements of the arrray
    }
    int sum;
    sum = sumOfArray(arr, n);
    printf("%d",sum);
    return 1;
}
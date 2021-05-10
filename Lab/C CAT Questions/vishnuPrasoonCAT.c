//LCM number pair
#include <stdio.h>
#include <string.h>
#include <math.h>

int lcm(int a, int b)
{
    int num1 = a;
    int num2 = b;
    int temp;
    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int gcd;
    gcd = num1;
    int lcm;
    lcm = (a * b) / gcd;
    return lcm;
}
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int arr[10];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    for (i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            a=lcm(arr[i],arr[j]);
            printf("%d,%d\t%d\n",arr[i],arr[j],a);
        }
    }

    return 1;
}

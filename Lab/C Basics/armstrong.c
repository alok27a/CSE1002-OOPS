#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    int n1 = n;
    int sum = 0;
    a = 10;
    while (n > 0)
    {
        b = n % a;
        sum = sum + (b * b * b);
        n = n / 10;
    }
    if (sum == n1)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong");
    }
    
    return 1;
}
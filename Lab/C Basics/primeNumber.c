#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 1;
    int i = 0;
    for (i = 3; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Prime number");
    }
    else if (n == 3 || n == 2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }

    return 1;
}
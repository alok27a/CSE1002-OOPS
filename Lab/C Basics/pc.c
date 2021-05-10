#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char n[100];
    int p;
    scanf("%s", n);
    scanf("%d", &p);
    int len;
    len = strlen(n);
    int a;
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (i == p - 1)
        {
            a = (int)n[i];
            if (a % 2 == 0)
            {
                printf("Even");
            }
            else
            {
                printf("Odd");
            }
        }
    }

    return 1;
}
//Largest of Three Numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest ", a);
        }
        else
        {
            printf("%d is biggest ", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("%d is biggest ", c);
        }
        else
        {
            printf("%d is biggest", b);
        }
    }

    return 1;
}
#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is bigger than %d", a, b);
    }
    else
    {
        printf("%d is bigger than %d", b, a);
    }
    return 1;
}
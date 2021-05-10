#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
int main()
{
    int a, b, s;
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("%d", s);
    return 1;
}
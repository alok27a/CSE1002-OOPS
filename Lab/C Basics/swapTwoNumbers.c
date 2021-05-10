#include <stdio.h>
#include <string.h>
#include <math.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d", x);
    printf("%d", y);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(a, b);
    return 1;
}
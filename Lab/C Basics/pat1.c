#include <stdio.h>
#include <string.h>
#include <math.h>

void area_peri(int *l, int *b)
{
    int area;
    int perimeter;
    printf("%d\n", (*l) * (*b));
    printf("%d", 2 * ((*l) + (*b)));
}

int main()
{
    int length, bredth;
    scanf("%d %d", &length, &bredth);
    area_peri(&length, &bredth);
    return 1;
}
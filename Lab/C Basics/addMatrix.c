#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat1[10][10], mat2[10][10], res[10][10];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
    return 1;
}
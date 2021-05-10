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
    int flag = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j && mat1[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Upper Triangular Matrix");
    }
    else
    {
        printf("Not a upper triangular matrix");
    }
    return 1;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int r1, c1, i = 0, j = 0;
int mat1[20][20];
int main()
{
    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int flag = 1;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (i == j && mat1[i][j] != 1)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not an Identity matrix");
    }

    return 1;
}